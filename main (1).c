int main() {
  int a, i, c, d, b;
  int r1, r2, r3;
  printf("nhap gia tri a:");
  scanf("%d", &a);
  printf("nhap gia tri i:");
  scanf("%d", &i);
  printf("nhap gia tri c:");
  scanf("%d", &c);
  printf("nhap gia tri d:");
  scanf("%d", &d);
  printf("nhap gia tri b:");
  scanf("%d", &b);
  r1 = ++i % 7;
  printf("r1 = %d\n", r1);
  r2 = 5 * (c - 3 + d);
  printf("r2 = %d\n", r2);
  r3 = a * (b + c / d) - 22;
  printf("r3 = %d\n", r3);

  return 0;
}