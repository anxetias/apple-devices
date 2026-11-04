// name: FUN_10057afbf
// address: 10057afbf

/* WARNING: Type propagation algorithm not settling */

ulong FUN_10057afbf(short *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  int *piVar5;
  ulong uVar6;
  undefined1 local_640 [1024];
  undefined4 local_240;
  int local_23c [2];
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*param_1 != 0) {
    FUN_10057b268(param_1,local_640);
    if (param_2 != 0) {
      lVar3 = 0;
      do {
        if ((*(int *)((long)&DAT_100757404 + lVar3) == param_2) &&
           (*(int *)((long)&DAT_100757408 + lVar3) == param_3)) {
          piVar5 = (int *)("al-movies" + lVar3);
          cVar2 = FUN_1001e4e7c(piVar5,local_640,1);
          if (cVar2 != '\0') goto LAB_10057b0a4;
          cVar2 = FUN_1001e64e4(local_640,"-movie",1);
          if (cVar2 == '\0') goto LAB_10057b084;
          piVar1 = local_23c + 1;
          FUN_1001e1c39(local_640,piVar1);
          FUN_1001e26e1("s",piVar1);
          cVar2 = FUN_1001e4e7c(piVar5,piVar1,1);
          if (cVar2 == '\0') goto LAB_10057b084;
          goto LAB_10057b0a4;
        }
        lVar3 = lVar3 + 0x1c;
      } while (lVar3 != 0x1c00);
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_23c[1] = 0x8220202;
        local_234 = "Assertion failure";
        local_22c = 0x822;
        local_22a = "ratingString != __null";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",local_23c + 1,0x16);
      }
      uVar6 = 0;
      FUN_1001782e9(0,0);
      goto LAB_10057b0b4;
    }
    piVar5 = local_23c + 1;
    FUN_1001e5b77(local_640,piVar5,0x100);
    FUN_10057b687(piVar5,local_23c);
    if (local_23c[0] == param_3) {
LAB_10057b0a4:
      uVar6 = CONCAT71((int7)((ulong)piVar5 >> 8),1);
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = local_240;
      }
      goto LAB_10057b0b4;
    }
  }
LAB_10057b084:
  uVar6 = 0;
LAB_10057b0b4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6 & 0xffffffff;
}

