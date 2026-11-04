// name: FUN_100324a38
// address: 100324a38

undefined8
FUN_100324a38(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,uint param_5)

{
  int iVar1;
  
  FUN_1003249a6(param_1,param_5);
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(undefined1 *)(param_1 + 0x48) = param_3;
  *(undefined1 *)(param_1 + 0x49) = param_4;
  if (((param_5 & 2) != 0) && (iVar1 = FUN_100324a90(param_1), iVar1 != 0)) {
    return 0;
  }
  return 1;
}

