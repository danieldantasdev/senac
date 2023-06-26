import React, {useEffect, useState} from 'react';
import {View, Text, Button, FlatList, TouchableOpacity, Alert} from 'react-native';
import axios from 'axios';
import AsyncStorage from '@react-native-async-storage/async-storage';

interface Beer {
    id: number;
    uid: string;
    brand: string;
    name: string;
    style: string;
    hop: string;
    yeast: string;
    malts: string;
    ibu: string;
    alcohol: string;
    blg: string;
}

const BeerScreen: React.FC = () => {
    const [beers, setBeers] = useState<Beer[]>([]);

    useEffect(() => {
        fetchBeersFromStorage();
    }, []);

    const fetchBeersFromStorage = async () => {
        try {
            const storedBeers = await AsyncStorage.getItem('beers');
            if (storedBeers) {
                setBeers(JSON.parse(storedBeers));
            }
        } catch (error) {
            console.log('Error fetching beers from storage:', error);
        }
    };

    const saveBeerToStorage = async ({beer}: { beer: Beer }) => {
        try {
            const storedBeers = await AsyncStorage.getItem('beers');
            const parsedBeers: Beer[] = storedBeers ? JSON.parse(storedBeers) : [];
            parsedBeers.push(beer);
            await AsyncStorage.setItem('beers', JSON.stringify(parsedBeers));
            setBeers(parsedBeers);
        } catch (error) {
            console.log('Error saving beer to storage:', error);
        }
    };

    const fetchRandomBeer = async () => {
        try {
            const response = await axios.get<Beer>('https://random-data-api.com/api/beer/random_beer');
            const beer = response.data;
            saveBeerToStorage({beer});
            Alert.alert('Random Beer', `Brand: ${beer.brand}\nName: ${beer.name}\nStyle: ${beer.style}`);
        } catch (error) {
            console.log('Error fetching random beer:', error);
        }
    };

    const renderBeerItem = ({item}: { item: Beer }) => {
        return (
            <TouchableOpacity onPress={() => showBeerDetails({beer: item})}>
                <View style={{padding: 10}}>
                    <Text style={{fontWeight: 'bold'}}>{item.brand}</Text>
                    <Text>{item.name}</Text>
                    <Text>{item.style}</Text>
                </View>
            </TouchableOpacity>
        );
    };

    const showBeerDetails = ({beer}: { beer: Beer }) => {
        Alert.alert('Beer Details', JSON.stringify(beer));
    };

    return (
        <View style={{flex: 1, padding: 10}}>
            <Button title="Get Random Beer" onPress={fetchRandomBeer}/>
            <FlatList
                data={beers}
                renderItem={renderBeerItem}
                keyExtractor={(item: Beer) => item.uid}
            />
        </View>
    );
};

export default BeerScreen;
