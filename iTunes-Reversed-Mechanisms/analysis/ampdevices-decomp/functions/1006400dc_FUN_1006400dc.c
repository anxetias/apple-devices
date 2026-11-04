// name: FUN_1006400dc
// address: 1006400dc

undefined4 FUN_1006400dc(long param_1,int param_2,void *param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long *plStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar5 = 0;
  switch(param_2) {
  case 800:
    FUN_10056ddd3(&local_48,param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1);
    FUN_1001b80b2(param_1 + 0x6d8,&local_48);
    break;
  case 0x321:
    FUN_10056ddd3(&local_48,param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1);
    FUN_1001b80b2(param_1 + 0x6e8,&local_48);
    break;
  case 0x322:
    FUN_10056ddd3(&local_48,param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1);
    FUN_1001b80b2(param_1 + 0x6f8,&local_48);
    break;
  case 0x323:
    FUN_10056ddd3(&local_48,param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1);
    FUN_1001b80b2(param_1 + 0x708,&local_48);
    break;
  case 0x324:
    FUN_10056ddd3(&local_48,param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1);
    FUN_1001b80b2(param_1 + 0x718,&local_48);
    break;
  default:
    if (param_2 == 0x616d7369) {
      local_68 = 0;
      uStack_60 = (long *)0x0;
      FUN_100321fab(&local_48,*(undefined8 *)(param_1 + 8));
      lVar2 = CONCAT44(uStack_44,local_48);
      local_68 = CONCAT44(uStack_44,local_48);
      uStack_60 = (long *)CONCAT44(CONCAT22(uStack_3a,uStack_3c),uStack_40);
      if (lVar2 == 0) {
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 != '\0') {
          local_48 = 0x8220202;
          uStack_44 = 0x7a0a90;
          uStack_40 = 1;
          uStack_3c = 0x822;
          uStack_3a = 0xe9c0;
          uStack_38 = 0x1007e;
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        uVar5 = 0x234f;
        FUN_1001782e9(0,0);
      }
      else if (param_4 == 0) {
        local_48 = 0;
        uStack_44 = 0;
        uStack_40 = 0;
        uStack_3c = 0;
        uStack_3a = 0;
        iVar6 = FUN_10062677a(lVar2,*(undefined8 *)(param_1 + 0x660),param_1 + 0x6d8);
        if (iVar6 == 0) {
          *(bool *)(CONCAT44(uStack_44,local_48) + 0x58) = *(char *)(param_1 + 0x685) != '\0';
          FUN_1001f1970(&local_58,*(undefined8 *)(param_1 + 0x670),*(undefined8 *)(param_1 + 0x678))
          ;
          FUN_1001b8264(CONCAT44(uStack_44,local_48) + 0x80,&local_58);
          FUN_1001ab006(&local_58);
          lVar2 = CONCAT44(uStack_44,local_48);
          *(undefined8 *)(lVar2 + 0x90) = *(undefined8 *)(param_1 + 0x668);
          *(undefined4 *)(lVar2 + 0x98) = *(undefined4 *)(param_1 + 0x680);
          *(undefined1 *)(lVar2 + 0x9c) = *(undefined1 *)(param_1 + 0x684);
        }
        plVar3 = (long *)CONCAT26(uStack_3a,CONCAT24(uStack_3c,uStack_40));
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
        uVar5 = 0;
      }
      else {
        local_58 = 0;
        plStack_50 = (long *)0x0;
        if (param_4 != 0x88) {
          uVar7 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar7,0x10);
          if (cVar4 != '\0') {
            local_48 = 0x8220202;
            uStack_44 = 0x7a0a90;
            uStack_40 = 1;
            uStack_3c = 0x822;
            uStack_3a = 0x75bf;
            uStack_38 = 0x1007f;
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
        }
        if ((((*(byte *)(param_1 + 0x18) & 0x10) == 0) || (*(long *)((long)param_3 + 0x10) == 0)) ||
           (iVar6 = FUN_100625128(lVar2,*(long *)((long)param_3 + 0x10),&local_58), iVar6 != 0)) {
          FUN_10063ba92(param_1 + 0x6d8);
          _memcpy((void *)(param_1 + 0x650),param_3,0x88);
          uVar5 = 0;
        }
        else {
          uVar5 = 0x1b59;
        }
        if (plStack_50 != (long *)0x0) {
          LOCK();
          plVar3 = plStack_50 + 1;
          lVar2 = *plVar3;
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (lVar2 == 0) {
            (**(code **)(*plStack_50 + 0x10))(plStack_50);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
    }
    else {
      if (param_2 != 0x616d734c) goto LAB_100640366;
      if (param_4 == 0) {
        *(undefined1 *)(param_1 + 0x8a3) = 1;
        goto LAB_100640366;
      }
      local_68 = 0;
      uStack_60 = (long *)0x0;
      if (param_4 != 0x5c) {
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 != '\0') {
          local_48 = 0x8220202;
          uStack_44 = 0x7a0a90;
          uStack_40 = 1;
          uStack_3c = 0x822;
          uStack_3a = 0x758a;
          uStack_38 = 0x1007f;
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      uVar5 = FUN_100322110(*(undefined8 *)(param_1 + 8),&local_68);
    }
    if (uStack_60 != (long *)0x0) {
      LOCK();
      plVar3 = uStack_60 + 1;
      lVar2 = *plVar3;
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*uStack_60 + 0x10))(uStack_60);
        std::__shared_weak_count::__release_weak();
      }
    }
    goto LAB_100640366;
  }
  FUN_1001b7a50(&local_48);
LAB_100640366:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

