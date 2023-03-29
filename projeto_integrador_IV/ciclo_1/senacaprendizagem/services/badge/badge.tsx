import { useEffect, useState } from 'react';
import { Badge } from '../../model/badge';
import { api } from '../http/http';

export function getAllBadges() {
  // const [badges, setBadges] = useState<Badge[]>([]);

  // useEffect(() => {
  //   api.get<Badge[]>('/Badge').then((response) => {
  //     setBadges(response.data);
  //   });
  // }, []);

  // return badges;

  //MOCK
  // const mock: any[] = require('../../components/utils/badges.json');

  // useEffect(() => {
  //   setBadges(mock);
  //   setMasterData(mock);
  //   setFilteredData(mock);
  // }, []);

  const [badges, setBadges] = useState<Badge[]>([]);
  const [search, setSearch] = useState<string>('');
  const [filteredData, setFilteredData] = useState<Badge[]>([]);
  const [masterData, setMasterData] = useState<Badge[]>([]);

  useEffect(() => {
    api.get<Badge[]>('/Badge').then((response) => {
      setBadges(response.data);
      setMasterData(response.data);
      setFilteredData(response.data);
    });
  }, []);

  return { badges, setBadges, search, setSearch, filteredData, setFilteredData, masterData, setMasterData };
}
