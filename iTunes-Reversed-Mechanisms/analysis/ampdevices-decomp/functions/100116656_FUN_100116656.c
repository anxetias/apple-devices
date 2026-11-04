// name: FUN_100116656
// address: 100116656

undefined8 FUN_100116656(undefined8 param_1,long param_2,long param_3,long param_4)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  float fVar7;
  
  fVar1 = *(float *)(&DAT_100701d30 + (ulong)(*(int *)(param_3 + 3000) == 1) * 4);
  bVar3 = *(byte *)(param_3 + 0xe8c);
  if ((ulong)bVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar6 = 0;
    uVar5 = 0;
    do {
      fVar2 = *(float *)(param_3 + uVar6 * 4);
      if (fVar1 < fVar2) {
        uVar5 = 0xfffffffe;
      }
      if (fVar2 < 0.0) {
        *(undefined4 *)(param_3 + uVar6 * 4) = 0;
      }
      uVar6 = uVar6 + 1;
    } while (bVar3 != uVar6);
  }
  lVar4 = *(long *)(param_2 + 0x18);
  if (*(char *)(lVar4 + 1) != '\0') {
    uVar6 = 0;
    do {
      fVar2 = *(float *)(param_4 + uVar6 * 4);
      fVar7 = 0.0;
      if ((fVar2 < 0.0) || (fVar7 = fVar1, fVar1 < fVar2)) {
        *(float *)(param_4 + uVar6 * 4) = fVar7;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(byte *)(lVar4 + 1));
  }
  return uVar5;
}

