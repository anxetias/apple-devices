// name: FUN_100351ae9
// address: 100351ae9

short * FUN_100351ae9(short *param_1,undefined4 param_2,int param_3,char param_4)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  short *psVar4;
  short sVar5;
  undefined4 local_58;
  undefined8 local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (short *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4a = "columns != nullptr";
LAB_100351cd8:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    sVar5 = *param_1;
    if (sVar5 < 100) {
      if (param_3 != 0) {
        lVar2 = FUN_100351d04(param_1,param_3);
        if (lVar2 != 0) {
          psVar4 = param_1 + 2;
          sVar5 = (short)((uint)((int)lVar2 - (int)psVar4) >> 2) * 0x6db7 + 1;
          if (*param_1 != sVar5) {
            FUN_1001c631b(psVar4 + (long)sVar5 * 0xe,psVar4 + (long)sVar5 * 0xe + 0xe,
                          (ulong)(uint)((int)*param_1 - (int)sVar5) * 0x1c);
            if (sVar5 <= param_1[1]) {
              param_1[1] = param_1[1] + 1;
            }
          }
        }
      }
      psVar4 = param_1 + (long)sVar5 * 0xe + 2;
      FUN_1001c62d9(psVar4,0x1c);
      FUN_10031fb38(psVar4,param_2);
      FUN_10031c728(param_2,&local_58);
      FUN_10031d3e5(local_54._4_4_,&local_58);
      *(undefined1 *)((long)param_1 + (long)sVar5 * 0x1c + 0xb) = (undefined1)local_54;
      param_1[(long)sVar5 * 0xe + 4] = 0x101;
      *(undefined1 *)(param_1 + (long)sVar5 * 0xe + 5) = 1;
      FUN_10035194c(0,psVar4,0);
      if ((param_4 != '\0') && ((char)param_1[(long)sVar5 * 0xe + 5] != '\0')) {
        param_1[1] = sVar5;
      }
      *param_1 = *param_1 + 1;
      goto LAB_100351c92;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4a = "columns->numColumns < kMaxColumns";
      goto LAB_100351cd8;
    }
  }
  psVar4 = (short *)0x0;
  FUN_1001782e9(0,0);
LAB_100351c92:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return psVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

