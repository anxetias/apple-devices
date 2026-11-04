// name: FUN_1005323e8
// address: 1005323e8

undefined8 *
FUN_1005323e8(undefined8 *param_1,int param_2,void *param_3,ulong param_4,char param_5,
             undefined4 param_6,int *param_7)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 local_4e8;
  undefined8 *local_4e0;
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  undefined4 local_4d0;
  undefined2 uStack_4cc;
  undefined2 uStack_4ca;
  undefined2 uStack_4c8;
  int local_4c0;
  undefined1 local_4bc [1156];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_1 = 0;
  param_1[1] = 0;
  local_4e0 = param_1;
  FUN_1001c62d9(&local_4c0,0x488);
  local_4c0 = param_2;
  _memcpy(local_4bc,param_3,0x460);
  if ((param_4 & 1) == 0) {
    if ((param_2 != 0x44574e4c) && ((param_2 != 0x46494c45 && (param_2 != 0x4d425546))))
    goto LAB_1005324b3;
LAB_1005324fe:
    FUN_100531852(&local_4d8,&local_4c0);
  }
  else {
    if (param_2 < 0x4d425546) {
      if ((param_2 == 0x46494c45) || (param_2 == 0x48545450)) goto LAB_1005324b3;
      goto LAB_1005324fe;
    }
    if ((param_2 != 0x4d425546) && ((param_2 != 0x4d46494c && (param_2 != 0x53485244))))
    goto LAB_1005324fe;
LAB_1005324b3:
    iVar5 = FUN_1003ae8a5(0,param_3,param_2,(int)param_5,param_6,&local_4e8);
    if (iVar5 == -0x80) {
LAB_100532571:
      FUN_100295c56(local_4e0);
      goto LAB_10053257d;
    }
    if (iVar5 != 0) {
      uVar6 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar6,0x10);
      if (cVar4 != '\0') {
        local_4d8 = 0x8220202;
        uStack_4d4 = 0x7a0a90;
        local_4d0 = 1;
        uStack_4cc = 0x400;
        uStack_4ca = (undefined2)iVar5;
        uStack_4c8 = (undefined2)((uint)iVar5 >> 0x10);
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_4d8,0x12);
      }
      goto LAB_100532571;
    }
    FUN_10053207e(&local_4d8,&local_4c0,local_4e8,0);
  }
  FUN_100217418(local_4e0,&local_4d8);
  plVar3 = (long *)CONCAT26(uStack_4ca,CONCAT24(uStack_4cc,local_4d0));
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__shared_weak_count::__release_weak();
    }
  }
  iVar5 = 0;
LAB_10053257d:
  if (param_7 != (int *)0x0) {
    *param_7 = iVar5;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_4e0;
}

