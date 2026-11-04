// name: FUN_10054d680
// address: 10054d680

undefined4 FUN_10054d680(ulong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  local_38 = 0;
  uVar3 = 0;
  uVar1 = FUN_1003b73be(param_1,param_2,0,&local_38);
  iVar2 = FUN_100466aac(" V4M V4M V4MPVOMPVOMPVOM",uVar1,local_38,&local_34,0,0xf);
  if (iVar2 != 0) {
    local_3c = 0;
    uVar1 = FUN_1003b73be(param_1 & 0xffffffff,param_2,0,&local_3c);
    uVar3 = FUN_100466aac(" A4M A4M A4M P4M P4M P4M B4M B4M B4M R4M R4M R4M",uVar1,local_3c,
                          &local_34,0,0xf);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_34;
  }
  return uVar3;
}

