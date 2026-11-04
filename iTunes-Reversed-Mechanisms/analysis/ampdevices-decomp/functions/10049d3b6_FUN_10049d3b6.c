// name: FUN_10049d3b6
// address: 10049d3b6

undefined4 FUN_10049d3b6(long param_1,undefined4 param_2,long *param_3)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 local_28;
  
  if (*param_3 != 0) {
    lVar3 = *param_3 + 0x20;
    cVar1 = FUN_1001b8428(lVar3);
    if (cVar1 == '\0') {
      local_28 = FUN_1001b8d0c(lVar3);
      goto LAB_10049d3ec;
    }
  }
  local_28 = 0;
LAB_10049d3ec:
  uVar2 = FUN_10043c93c(*(undefined8 *)(param_1 + 0x4d8),*(undefined4 *)(param_1 + 0x1c),
                        param_1 + 0x20,local_28,param_2);
  FUN_10014d890(&local_28);
  return uVar2;
}

