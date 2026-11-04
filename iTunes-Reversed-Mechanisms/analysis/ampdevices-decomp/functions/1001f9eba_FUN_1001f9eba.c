// name: FUN_1001f9eba
// address: 1001f9eba

undefined8 FUN_1001f9eba(void)

{
  char cVar1;
  long in_R8;
  
  cVar1 = FUN_1001fbf81(in_R8);
  if (cVar1 != '\0') {
    *(int *)(in_R8 + 0x444) = *(int *)(in_R8 + 0x444) + 1;
  }
  return 0;
}

