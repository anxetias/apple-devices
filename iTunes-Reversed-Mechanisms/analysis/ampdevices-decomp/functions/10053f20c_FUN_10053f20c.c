// name: FUN_10053f20c
// address: 10053f20c

undefined8 FUN_10053f20c(long *param_1,long param_2,ulong *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined4 local_38;
  undefined8 uStack_34;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined6 uStack_28;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0 && param_3 == (ulong *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      pcVar6 = "(inITTrackInfo != __null) || (inITTrackInfoPriv != __null)";
LAB_10053f45f:
      uStack_2c = 0x822;
      uStack_34 = "Assertion failure";
      local_38 = 0x8220202;
      uStack_2a = SUB82(pcVar6,0);
      uStack_28 = (undefined6)((ulong)pcVar6 >> 0x10);
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    if ((char)param_1[0xa7] != '\0') {
      if (param_3 != (ulong *)0x0) {
        uVar4 = *param_3;
        if (param_1[0xa9] != 0) {
          param_3[0xf] = param_1[0xa9];
          uVar4 = uVar4 | 8;
        }
        if (param_1[0xa8] != 0) {
          param_3[0xe] = param_1[0xa8];
          uVar4 = uVar4 | 8;
        }
        if (param_1[0xaa] != 0) {
          param_3[0x10] = param_1[0xaa];
          uVar4 = uVar4 | 8;
          *param_3 = uVar4;
        }
        if (param_1[0xab] != 0) {
          param_3[0x11] = param_1[0xab];
          uVar4 = uVar4 | 8;
        }
        if (*(int *)((long)param_1 + 0x564) != 0) {
          *(int *)((long)param_3 + 0x94) = *(int *)((long)param_1 + 0x564);
          uVar4 = uVar4 | 8;
        }
        if (param_1[0xad] != 0) {
          param_3[0x13] = param_1[0xad];
          uVar4 = uVar4 | 8;
        }
        if (param_1[0xae] != 0) {
          param_3[0x14] = param_1[0xae];
          uVar4 = uVar4 | 8;
        }
        if (*(ulong *)((long)param_1 + 0x59c) != 0) {
          param_3[0x1a0] = *(ulong *)((long)param_1 + 0x59c);
          uVar4 = uVar4 | 0x1000000;
        }
        *(int *)(param_3 + 0x12) = (int)param_1[0xac];
        *param_3 = uVar4 | 8;
        *(char *)(param_3 + 0x15) = (char)param_1[0xb7];
        *(undefined1 *)((long)param_3 + 0xa9) = *(undefined1 *)((long)param_1 + 0x5b9);
        *(undefined1 *)((long)param_3 + 0xab) = *(undefined1 *)((long)param_1 + 0x5ba);
        if ((*(short *)((long)param_1 + 0x7bc) != 0) && ((param_3[1] & 2) == 0)) {
          FUN_1001e1c39((long)param_1 + 0x7bc,param_3 + 0x59);
          FUN_1001e1c39((long)param_1 + 0xbbc,param_3 + 0xd9);
          *(byte *)(param_3 + 1) = (byte)param_3[1] | 2;
        }
        cVar1 = (**(code **)(*param_1 + 0x40))(param_1);
        if (cVar1 != '\0') {
          uVar2 = FUN_10041545e();
          iVar3 = FUN_1003b77e0(uVar2,param_1[0xa9],param_1[0xaa],&local_38);
          if (iVar3 == 0) {
            *(undefined4 *)((long)param_3 + 0xd0c) = local_38;
            *(undefined4 *)(param_3 + 0x1a2) = (undefined4)uStack_34;
            *(undefined4 *)((long)param_3 + 0xd14) = uStack_34._4_4_;
            *(uint *)(param_3 + 0x1a3) = CONCAT22(uStack_2a,uStack_2c);
            *(byte *)((long)param_3 + 2) = *(byte *)((long)param_3 + 2) | 0x20;
          }
        }
      }
      goto LAB_10053f420;
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      pcVar6 = "mMoreInfo.haveProtectedInfo";
      goto LAB_10053f45f;
    }
  }
  FUN_1001782e9(0,0);
LAB_10053f420:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

