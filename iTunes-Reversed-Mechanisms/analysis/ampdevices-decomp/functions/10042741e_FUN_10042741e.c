// name: FUN_10042741e
// address: 10042741e

void FUN_10042741e(byte *param_1,char *param_2,int param_3,undefined1 *param_4,uint param_5)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long local_230;
  ushort local_228;
  undefined1 local_226 [510];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_230 = 0;
  *param_4 = 0;
  if (param_3 != 0 && param_2 != (char *)0x0) {
    if ((byte)(*param_2 - 1U) < 3) {
      FUN_1004273cb();
      uVar3 = (uint)local_228;
      if (param_5 < local_228) {
        local_228 = (ushort)param_5;
        uVar3 = param_5;
      }
      FUN_1001e7247(local_226,uVar3,param_4,param_5,&local_230);
      param_4[local_230] = 0;
    }
    else if (*param_2 == '\0') {
      uVar3 = param_3 - 1U;
      if (param_5 <= param_3 - 1U) {
        uVar3 = param_5;
      }
      if (uVar3 == 0) {
        lVar2 = 0;
      }
      else {
        lVar1 = 0;
        do {
          lVar2 = lVar1;
          if (param_2[lVar1 + 1] == '\0') break;
          param_4[lVar1] = param_2[lVar1 + 1];
          lVar1 = lVar1 + 1;
          lVar2 = (long)(int)uVar3;
        } while ((int)uVar3 != lVar1);
      }
      param_4[lVar2] = 0;
      if ((param_1 != (byte *)0x0) && ((*param_1 & 1) == 0)) {
        if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
          FUN_1001e7d94(param_4,lVar2);
          return;
        }
        goto LAB_100427535;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
LAB_100427535:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

