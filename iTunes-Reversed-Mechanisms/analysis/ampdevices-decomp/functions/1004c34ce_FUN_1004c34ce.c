// name: FUN_1004c34ce
// address: 1004c34ce

int FUN_1004c34ce(long *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  int local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = (**(code **)(*param_1 + 0x398))(param_1,0);
  if (iVar2 < -0x80) {
    if ((2 < iVar2 + 0xa665U) && (1 < iVar2 + 0xa415U)) {
LAB_1004c361b:
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        uStack_44 = 0x7a0a90;
        uStack_40 = 1;
        local_3c = 0x400;
        local_3a = iVar2;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
      if (iVar2 == 0) goto LAB_1004c3644;
    }
  }
  else if (((0x38 < iVar2 - 0x2348U) ||
           ((0x100200000000001U >> ((ulong)(iVar2 - 0x2348U) & 0x3f) & 1) == 0)) && (iVar2 != -0x80)
          ) {
    if (iVar2 == 0) {
      FUN_100443a6e(*(float *)((long)param_1 + 0x52c) * *(float *)(param_1 + 0xa6),param_1[0x9e],
                    2 - (uint)*(byte *)(param_1 + 0xa5));
      FUN_1004c2aee(param_1,param_1[0xa2],1,&local_48);
      param_1[0xa3] = CONCAT44(uStack_44,local_48);
      FUN_100444d96(param_1[0x9e],param_1[0xa4]);
      lVar3 = (**(code **)(*param_1 + 0x2f8))(param_1,1);
      if (lVar3 != 0) {
        if ((*(int *)((long)param_1 + 0x1c) == 0x48545450) &&
           (lVar4 = (**(code **)(*param_1 + 0x248))(param_1), lVar4 != 0)) {
          FUN_1002af370(lVar4,lVar3);
        }
        (**(code **)(*param_1 + 0x280))(param_1);
        FUN_100175848(lVar3);
      }
      (**(code **)(*param_1 + 0x358))(param_1,0);
      goto LAB_1004c3644;
    }
    goto LAB_1004c361b;
  }
  (**(code **)(*param_1 + 0xf8))(param_1);
LAB_1004c3644:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

