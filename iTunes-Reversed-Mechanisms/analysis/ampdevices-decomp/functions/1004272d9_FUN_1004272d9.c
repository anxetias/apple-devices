// name: FUN_1004272d9
// address: 1004272d9

void FUN_1004272d9(byte *param_1,char *param_2,int param_3,byte *param_4,uint param_5)

{
  byte bVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  ushort local_228 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_4 = 0;
  if (param_3 != 0 && param_2 != (char *)0x0) {
    if ((byte)(*param_2 - 1U) < 3) {
      FUN_1004273cb();
      uVar3 = (ushort)param_5 & 0xff;
      if (uVar3 < local_228[0]) {
        local_228[0] = uVar3;
      }
      FUN_1001e4c6b(local_228,param_4);
    }
    else if (*param_2 == '\0') {
      uVar2 = param_3 - 1U;
      if ((int)(param_5 & 0xff) <= (int)(param_3 - 1U)) {
        uVar2 = param_5 & 0xff;
      }
      if (0 < (int)uVar2) {
        lVar4 = 1;
        do {
          if (param_2[lVar4] == 0) break;
          param_4[lVar4] = param_2[lVar4];
          bVar1 = *param_4;
          *param_4 = bVar1 + 1;
          lVar4 = lVar4 + 1;
        } while ((byte)(bVar1 + 1) < (byte)uVar2);
      }
      if ((param_1 != (byte *)0x0) && ((*param_1 & 1) == 0)) {
        if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
          FUN_1001e7dc1(param_4);
          return;
        }
        goto LAB_1004273c6;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
LAB_1004273c6:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

