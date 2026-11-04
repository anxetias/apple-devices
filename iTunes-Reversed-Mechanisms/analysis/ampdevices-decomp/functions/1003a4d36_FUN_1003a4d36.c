// name: FUN_1003a4d36
// address: 1003a4d36

void FUN_1003a4d36(long param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_1001a85de(param_2,param_1 + 200);
  if (cVar1 == '\0') {
    FUN_1001a8c4a(param_1 + 200,param_2);
    *(byte *)(param_1 + 0xfa) = *(byte *)(param_1 + 0xfa) & 0xfb;
    FUN_1003a2686(param_1,1);
    *(byte *)(param_1 + 0xf9) = *(byte *)(param_1 + 0xf9) & 0xbf;
  }
  return;
}

