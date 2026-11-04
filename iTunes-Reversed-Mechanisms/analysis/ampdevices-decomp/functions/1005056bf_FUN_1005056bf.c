// name: FUN_1005056bf
// address: 1005056bf

undefined8 FUN_1005056bf(long param_1)

{
  undefined8 uVar1;
  undefined8 local_28;
  
  local_28 = 0;
  uVar1 = FUN_100505716();
  FUN_1005c15bb(*(undefined8 *)(param_1 + 0x7168),3 - (uint)(*(char *)(param_1 + 0x37e) == '\0'),
                uVar1,&local_28);
  FUN_10017060f(uVar1);
  return local_28;
}

