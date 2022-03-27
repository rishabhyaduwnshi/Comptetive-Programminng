int distance(int x1, int y1, int x2, int y2)
		{
		   int dX = x2-x1;
		   int dY = y2-y1;
		   return round(sqrt((dX*dX)+(dY*dY)));
		}
