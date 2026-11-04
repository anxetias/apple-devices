// name: FUN_10018fd8c
// address: 10018fd8c

undefined8
FUN_10018fd8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  iVar1 = FUN_10019206f(param_1,param_2,param_5);
  if (iVar1 == 0) {
    iVar1 = _open((char *)(param_5 + 0x19),0xa01,0x1b6);
    if (iVar1 != -1) {
      local_38 = 0;
      uStack_30 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      _fstat_INODE64(iVar1,&local_b8);
      *(undefined4 *)(param_5 + 0x41c) = (undefined4)local_b8;
      _close(iVar1);
      return 0;
    }
    ___bzero(param_5,0x420);
    piVar3 = ___error();
    iVar1 = *piVar3;
  }
  uVar2 = FUN_1001eb020(iVar1);
  return uVar2;
}

