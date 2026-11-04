// name: FUN_10027ba74
// address: 10027ba74

void FUN_10027ba74(void)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iVar3 = FUN_100208c67(&local_38);
  if (iVar3 == 0) {
    cVar2 = FUN_1001c5630(&local_38,DAT_1008c76a0 + 0x1372,0x30);
    lVar1 = DAT_1008c76a0;
    if (cVar2 == '\0') {
      local_68 = *(undefined8 *)(DAT_1008c76a0 + 0x1372);
      uStack_60 = *(undefined8 *)(DAT_1008c76a0 + 0x137a);
      local_58 = *(undefined8 *)(DAT_1008c76a0 + 0x1382);
      uStack_50 = *(undefined8 *)(DAT_1008c76a0 + 0x138a);
      local_48 = *(undefined8 *)(DAT_1008c76a0 + 0x1392);
      uStack_40 = *(undefined8 *)(DAT_1008c76a0 + 0x139a);
      *(undefined4 *)(DAT_1008c76a0 + 0x1382) = local_28;
      *(undefined4 *)(lVar1 + 0x1386) = uStack_24;
      *(undefined4 *)(lVar1 + 0x138a) = uStack_20;
      *(undefined4 *)(lVar1 + 0x138e) = uStack_1c;
      *(undefined4 *)(lVar1 + 0x1372) = local_38;
      *(undefined4 *)(lVar1 + 0x1376) = uStack_34;
      *(undefined4 *)(lVar1 + 0x137a) = uStack_30;
      *(undefined4 *)(lVar1 + 0x137e) = uStack_2c;
      *(undefined4 *)(lVar1 + 0x1392) = local_18;
      *(undefined4 *)(lVar1 + 0x1396) = uStack_14;
      *(undefined4 *)(lVar1 + 0x139a) = uStack_10;
      *(undefined4 *)(lVar1 + 0x139e) = uStack_c;
      FUN_10027bb03(&local_68,&local_38,0);
    }
  }
  return;
}

