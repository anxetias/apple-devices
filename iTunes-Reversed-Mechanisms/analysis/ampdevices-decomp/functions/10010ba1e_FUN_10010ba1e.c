// name: FUN_10010ba1e
// address: 10010ba1e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10010ba1e(undefined8 param_1,float *param_2,float *param_3,long param_4,long param_5)

{
  long lVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  undefined8 local_68;
  undefined8 local_60;
  float local_58;
  float local_54;
  float local_50;
  uint local_4c;
  float local_48;
  uint local_44;
  undefined8 local_40;
  float local_38;
  float local_34;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  fVar4 = param_2[4] * DAT_100701a20 + param_2[0xc] * _DAT_100701a40;
  fVar2 = DAT_100701a20 * param_3[4] + _DAT_100701a40 * param_3[0xc];
  local_58 = (fVar2 - fVar4) * DAT_100700b6c;
  local_54 = (fVar2 + fVar4) * _DAT_100700b70;
  fVar4 = param_2[3] * DAT_100701a1c + param_2[0xb] * DAT_100701a3c;
  fVar2 = DAT_100701a1c * param_3[3] + DAT_100701a3c * param_3[0xb];
  local_50 = fVar2 * DAT_100700b78 + DAT_100700b74 * fVar4;
  local_4c = (uint)(fVar2 * _DAT_100700b7c + fVar4 * DAT_100700b78) ^ _DAT_100700430;
  local_44 = (uint)(param_2[2] * DAT_100701a18 + param_2[10] * DAT_100701a38) ^ _DAT_100700430;
  local_48 = DAT_100701a18 * param_3[2] + DAT_100701a38 * param_3[10];
  fVar5 = param_2[1] * DAT_100701a14 + param_2[9] * DAT_100701a34;
  fVar2 = DAT_100701a14 * param_3[1] + DAT_100701a34 * param_3[9];
  fVar4 = (float)((ulong)DAT_100700b90 >> 0x20);
  local_40 = CONCAT44(fVar2 * fVar4 + fVar5 * _UNK_100700b84,
                      fVar2 * (float)DAT_100700b90 + fVar5 * _DAT_100700b80);
  fVar5 = *param_2 * DAT_100701a10 + param_2[8] * DAT_100701a30;
  fVar2 = DAT_100701a10 * *param_3 + DAT_100701a30 * param_3[8];
  local_38 = (fVar5 + fVar2) * DAT_100700b6c;
  local_34 = (fVar2 - fVar5) * DAT_100700b6c;
  local_30 = CONCAT44(DAT_100701a2c * param_3[7] * _UNK_100700bb4 +
                      param_2[7] * DAT_100701a2c * _UNK_100700ba4,
                      DAT_100701a2c * param_3[7] * _DAT_100700bb0 +
                      param_2[7] * DAT_100701a2c * _DAT_100700ba0);
  auVar3 = insertps(ZEXT416((uint)param_2[6]),param_3[6],0x10);
  local_68 = CONCAT44(auVar3._4_4_ * _DAT_100701a28,auVar3._0_4_ * _DAT_100701a28);
  local_60 = CONCAT44(param_2[5] * DAT_100701a24 * fVar4 +
                      DAT_100701a24 * param_3[5] * _UNK_100700bc4,
                      param_2[5] * DAT_100701a24 * (float)DAT_100700b90 +
                      DAT_100701a24 * param_3[5] * _DAT_100700bc0);
  FUN_100111faa(&local_68,8,1);
  lVar1 = 0;
  do {
    *(undefined4 *)(param_4 + lVar1 * 4) = *(undefined4 *)(&local_68 + lVar1);
    *(undefined4 *)(param_5 + lVar1 * 4) = *(undefined4 *)((long)&local_68 + lVar1 * 8 + 4);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

