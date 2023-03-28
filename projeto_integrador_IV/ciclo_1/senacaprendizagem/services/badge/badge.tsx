import { useEffect, useState } from 'react';
import { Badge } from '../../model/badge';
import { api } from '../http/http';

export function getAllBadges(): Badge[] {
  const [badges, setBadges] = useState<Badge[]>([]);

  useEffect(() => {
    api.get<Badge[]>('/Badge').then((response) => {
      setBadges(response.data);
    });
  }, []);

  return badges;
}
