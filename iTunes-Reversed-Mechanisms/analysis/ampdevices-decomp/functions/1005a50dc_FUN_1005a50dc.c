// name: FUN_1005a50dc
// address: 1005a50dc

int FUN_1005a50dc(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong local_888 [2];
  undefined4 local_878;
  char *local_874;
  undefined2 local_86c;
  int local_86a;
  undefined1 local_858 [512];
  ushort local_658;
  short local_656;
  undefined1 local_654 [508];
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1[2] == 0) {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = "mSpeakableCheckpointDict != nullptr";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
    iVar4 = -0x32;
  }
  else {
    lVar5 = FUN_100166c1b(param_1[2],&cf_Messages);
    if (lVar5 == 0) {
      iVar4 = 0;
    }
    else {
      uVar6 = FUN_1001737f8(lVar5);
      FUN_100173c2a(lVar5,&cf__,0,uVar6,4,local_888);
      uVar2 = local_888[0];
      if (local_888[0] == uVar6 - 1) {
        FUN_100173c2a(lVar5,&cf__,0,local_888[0],4,local_888);
        uVar6 = uVar2;
      }
      FUN_100169ce1(lVar5,0,local_888[0],&local_658);
      FUN_100169ce1(lVar5,local_888[0] + 1,~local_888[0] + uVar6,local_858);
      iVar4 = FUN_1002441f8(*(undefined4 *)(*param_1 + 0x66b0),*param_1 + 0x6b40,0x726f6f74,1,
                            &local_458);
      if (iVar4 != -0x80) {
        if (iVar4 != 0) {
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 != '\0') {
            local_878 = 0x8220202;
            local_874 = "Assertion failure";
            local_86c = 0x400;
            local_86a = iVar4;
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_878,0x12);
          }
          if (iVar4 != 0) goto LAB_1005a5308;
        }
        if ((local_658 != 0) && (local_656 == 0x2f)) {
          local_658 = local_658 - 1;
          FUN_1001c631b(local_654,&local_656,(uint)local_658 * 2);
        }
        FUN_100184e7f(&local_656,local_658,0x2f);
        plVar1 = param_1 + 0x22a;
        iVar4 = FUN_10017d64f(&local_458,&local_656,local_658,plVar1,0,0);
        if (iVar4 == 0) {
          iVar4 = FUN_10017ecc9(plVar1,local_858,param_1 + 0x1a6,0);
          if (iVar4 == -0x2b) {
            iVar4 = FUN_100181256(plVar1,local_858,param_1 + 0x1a6);
          }
        }
        *(byte *)((long)param_1 + 0x15b4) = *(byte *)((long)param_1 + 0x15b4) | 0x20;
      }
    }
  }
LAB_1005a5308:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

