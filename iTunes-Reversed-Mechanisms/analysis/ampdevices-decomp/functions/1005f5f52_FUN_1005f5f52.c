// name: FUN_1005f5f52
// address: 1005f5f52

void FUN_1005f5f52(undefined8 param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  undefined1 local_4c;
  undefined1 uStack_4b;
  undefined2 uStack_4a;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined1 uStack_37;
  undefined2 uStack_36;
  undefined4 local_34;
  
  if (*(char *)(param_2 + 0x21c) == '\0') {
LAB_1005f5fa8:
    uVar4 = FUN_100172473(DAT_1008c4d90,param_2 + 0x11c,0x8000100);
    lVar5 = FUN_100166c1b(param_1,uVar4);
    if (lVar5 == 0) {
      *(undefined4 *)(param_2 + 4) = 2;
      goto LAB_1005f60cc;
    }
  }
  else {
    uVar4 = FUN_100172473(DAT_1008c4d90,param_2 + 0x21c,0x8000100);
    lVar5 = FUN_100166c1b(param_1,uVar4);
    if (lVar5 == 0) {
      FUN_10017060f(uVar4);
      goto LAB_1005f5fa8;
    }
  }
  local_48 = param_1;
  local_40 = uVar4;
  lVar6 = FUN_100279630();
  local_34 = 0;
  FUN_1001680c4(lVar5,&local_34);
  uVar1 = *(uint *)(param_2 + 0x11);
  uStack_4a = (undefined2)((uint)*(undefined4 *)(param_2 + 0xd) >> 0x10);
  _local_4c = CONCAT11(0x80,(char)*(undefined4 *)(param_2 + 0xd));
  uStack_36 = (undefined2)(uVar1 >> 0x10);
  _local_38 = CONCAT11(0x80,(char)uVar1);
  iVar3 = FUN_10017792d(&local_34,&local_4c,1,0);
  bVar2 = 1;
  uVar7 = 2;
  if (iVar3 == 1) {
    if (0xffffff < uVar1) {
      iVar3 = FUN_10017792d(&local_34,&local_38,1,0);
      if (iVar3 != 0) goto LAB_1005f6063;
    }
    uVar7 = 1;
    bVar2 = 0;
  }
LAB_1005f6063:
  *(undefined4 *)(param_2 + 4) = uVar7;
  if ((*(char *)(param_2 + 8) != '\0') && (!(bool)(bVar2 | *(char *)(lVar6 + 0x32c) == '\0'))) {
    iVar3 = FUN_10017792d(&local_34,lVar6 + 0x32e,1,0);
    if (iVar3 == 0) {
      *(undefined4 *)(param_2 + 4) = 0;
    }
  }
  *(undefined4 *)(lVar6 + 0x32e) = local_34;
  FUN_100177cff(lVar6 + 0x332);
  param_1 = local_48;
  uVar4 = local_40;
LAB_1005f60cc:
  FUN_10017060f(uVar4);
  if (*(int *)(param_2 + 4) == 1) {
    uVar4 = FUN_100172473(DAT_1008c4d90,param_2 + 0x31c,0x8000100);
    lVar5 = FUN_100166c1b(param_1,uVar4);
    if (lVar5 != 0) {
      FUN_10017393c(lVar5,param_2 + 0x530,0x100,0x8000100);
    }
    FUN_10017060f(uVar4);
    if (*(char *)(param_2 + 0x41c) != '\0') {
      uVar4 = FUN_100172473(DAT_1008c4d90,param_2 + 0x41c,0x8000100);
      FUN_100166ce2(param_1,uVar4,param_2 + 0x630);
      FUN_10017060f(uVar4);
    }
  }
  return;
}

