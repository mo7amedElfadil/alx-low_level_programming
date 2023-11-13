int rand(void)
{
 static int t[] = {8, 8, 9, 7, 23, 74};
 static int i = 0;

 i = i > 5 ? 0 : i;
 return t[i++];
}

