// name: FUN_1002c062c
// address: 1002c062c

void FUN_1002c062c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = *(long *)(param_2 + 0x78);
  lVar2 = *(long *)(param_1 + 0x78);
  uVar3 = 0xffffffff;
  if (*(uint *)(lVar2 + 0xc) <= *(uint *)(lVar1 + 0xc)) {
    uVar3 = (uint)(*(uint *)(lVar2 + 0xc) < *(uint *)(lVar1 + 0xc));
  }
  if (uVar3 == 0) {
    fVar4 = *(float *)(lVar2 + 8);
    if ((fVar4 == 0.0) && (!NAN(fVar4))) {
      fVar4 = (float)*(uint *)(lVar2 + 4);
    }
    fVar5 = *(float *)(lVar1 + 8);
    if ((fVar5 == 0.0) && (!NAN(fVar5))) {
      fVar5 = (float)*(uint *)(lVar1 + 4);
    }
    uVar3 = 0xffffffff;
    if (fVar4 <= fVar5) {
      uVar3 = (uint)(fVar4 < fVar5);
    }
    if (uVar3 == 0) {
      FUN_1002bf534();
      return;
    }
  }
  return;
}

