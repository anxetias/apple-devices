// name: FUN_1002e84c0
// address: 1002e84c0

undefined8 FUN_1002e84c0(long param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
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
  
  lVar1 = *param_2;
  lVar3 = FUN_1001ab132(lVar1 + 0x160);
  uVar4 = 0;
  if (((lVar3 != 0) && (-1 < *(short *)(lVar1 + 0xc6))) &&
     ((*(char *)(param_1 + 0x18) != '\x01' || (*(long *)(lVar1 + 0x168) != 0)))) {
    FUN_1001a8c4a(*(undefined8 *)(param_1 + 8),lVar1 + 0x160);
    **(undefined8 **)(param_1 + 0x10) = *(undefined8 *)(lVar1 + 0x168);
    uVar4 = 0x2349;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_10031bbcc(&local_78,lVar1);
      puVar2 = *(undefined8 **)(param_1 + 0x20);
      puVar2[8] = local_38;
      puVar2[9] = uStack_30;
      puVar2[6] = local_48;
      puVar2[7] = uStack_40;
      puVar2[4] = local_58;
      puVar2[5] = uStack_50;
      puVar2[2] = local_68;
      puVar2[3] = uStack_60;
      *puVar2 = local_78;
      puVar2[1] = uStack_70;
    }
  }
  return uVar4;
}

