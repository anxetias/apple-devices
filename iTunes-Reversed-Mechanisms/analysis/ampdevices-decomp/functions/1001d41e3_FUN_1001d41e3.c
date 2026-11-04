// name: FUN_1001d41e3
// address: 1001d41e3

void FUN_1001d41e3(long param_1,long param_2)

{
  long lVar1;
  
  FUN_1001c2502(param_1 + 0x980);
  lVar1 = 0x990;
  if (*(char *)(param_2 + 0x138) == '\0') {
    *(long *)(param_1 + 0x978) =
         *(long *)(param_1 + 0x978) + (*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10));
    lVar1 = 0x988;
  }
  FUN_1001c2470(param_1 + lVar1,param_2);
  return;
}

