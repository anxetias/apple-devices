// name: FUN_10019aeff
// address: 10019aeff

void FUN_10019aeff(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  size_t sVar6;
  long local_840;
  char local_838 [2056];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006989dc(uVar4);
    }
    FUN_1001782e9(0,0);
  }
  else {
    lVar2 = _CFGetTypeID();
    lVar3 = _CFStringGetTypeID();
    if (lVar2 == lVar3) {
      lVar2 = _CFGetTypeID(param_2);
      lVar3 = _CFStringGetTypeID();
      if (lVar2 == lVar3) {
        local_840 = FUN_1001705fc(param_2);
      }
      else {
        local_840 = FUN_1001736b8(DAT_1008c4d90,0,&cf___,param_2);
      }
      if (local_840 == 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          FUN_100698966(uVar4);
        }
        FUN_1001782e9(0,0);
      }
      else {
        uVar4 = FUN_100174969(DAT_1008c4d90,param_1,0,&cf_______________<_>___________,0x8000100);
        uVar5 = FUN_100174969(DAT_1008c4d90,local_840,0,&cf_______________<_>___________,0x8000100);
        lVar2 = FUN_100170ef7(param_3);
        if (0 < lVar2) {
          FUN_1001710c1(param_3,PTR_s___10088f628,1);
        }
        cVar1 = FUN_10017393c(uVar4,local_838,0x800,0x8000100);
        if (cVar1 != '\0') {
          sVar6 = _strlen(local_838);
          FUN_1001710c1(param_3,local_838,sVar6);
          FUN_1001710c1(param_3,PTR_s___10088f630,1);
          cVar1 = FUN_10017393c(uVar5,local_838,0x800,0x8000100);
          if (cVar1 == '\0') {
            local_838[0] = '\0';
          }
          sVar6 = _strlen(local_838);
          FUN_1001710c1(param_3,local_838,sVar6);
        }
        FUN_10017060f(uVar4);
        FUN_10017060f(uVar5);
      }
      FUN_10014d890(&local_840);
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_1006988f0(uVar4);
      }
      FUN_1001782e9(0,0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

