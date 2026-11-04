// name: FUN_100476ac1
// address: 100476ac1

undefined8 FUN_100476ac1(undefined8 param_1,long param_2)

{
  undefined1 local_28 [16];
  
  FUN_1001b7a44();
  if ((param_2 != 0) && (*(long *)(param_2 + 0x10) != 0)) {
    FUN_1001ddc17(local_28,*(long *)(param_2 + 0x10) + 0x1c10,*(undefined4 *)(param_2 + 0xd8),0);
    FUN_1001b80b2(param_1,local_28);
    FUN_1001b7a50(local_28);
  }
  return param_1;
}

