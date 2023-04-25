import { Course } from './course';

export class Program {
  category: 'Sisu' | 'Prouni' | 'Fies' = 'Sisu';
  course: Course = new Course();
}
