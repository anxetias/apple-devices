// name: FUN_1003e98f6
// address: 1003e98f6

int FUN_1003e98f6(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  Bytef *pBVar4;
  Bytef *pBVar5;
  undefined8 uVar6;
  z_stream local_e8;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  Bytef *local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c62d9(&local_e8,0x70);
  FUN_100160772(param_1,0);
  iVar2 = FUN_100160c3f(param_1,&local_68);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      pBVar4 = (Bytef *)FUN_1001c63e1(1000000);
      if (pBVar4 != (Bytef *)0x0) {
        pBVar5 = (Bytef *)FUN_1001c63e1(2000000);
        local_60 = pBVar4;
        if (pBVar5 == (Bytef *)0x0) {
          uVar6 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar6,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "destData != nullptr";
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          pBVar5 = (Bytef *)0x0;
          FUN_1001782e9(0,0);
          iVar2 = -0x6c;
          pBVar4 = local_60;
        }
        else {
          iVar2 = _deflateInit_(&local_e8,1,"1.2.12",0x70);
          if (iVar2 == 0) {
            if (local_68 != 0) {
              do {
                pBVar4 = local_60;
                local_70 = local_68;
                if (999999 < local_68) {
                  local_70 = 1000000;
                }
                iVar2 = FUN_100160380(param_1,&local_70,local_60);
                if (iVar2 != 0) {
                  if (iVar2 != -0x80) {
                    uVar6 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar6,0x10);
                    pBVar4 = local_60;
                    if (cVar1 != '\0') {
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
LAB_1003e9cbb:
                      local_4c = 0x400;
                      local_54 = "Assertion failure";
                      local_58 = 0x8220202;
                      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58
                                          ,0x12);
                      pBVar4 = local_60;
                    }
                  }
                  goto LAB_1003e9a6b;
                }
                local_68 = local_68 - local_70;
                local_e8.next_in = pBVar4;
                local_e8.avail_in = (uInt)local_70;
                do {
                  local_e8.avail_out = 2000000;
                  local_e8.next_out = pBVar5;
                  iVar3 = _deflate(&local_e8,(uint)(local_68 == 0) << 2);
                  if (iVar3 == -2) {
                    uVar6 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar6,0x10);
                    if (cVar1 != '\0') {
                      local_58 = 0x8220202;
                      local_54 = "Assertion failure";
                      local_4c = 0x822;
                      local_4a = "zStatus != (-2)";
                      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",
                                          &local_58,0x16);
                    }
                    FUN_1001782e9(0,0);
                  }
                  local_78 = (ulong)(2000000 - local_e8.avail_out);
                  iVar2 = FUN_100160894(param_2,&local_78,pBVar5);
                  if (iVar2 != 0) {
                    pBVar4 = local_60;
                    if (iVar2 == -0x80) goto LAB_1003e9a6b;
                    uVar6 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar6,0x10);
                    pBVar4 = local_60;
                    if (cVar1 == '\0') goto LAB_1003e9a6b;
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                    goto LAB_1003e9cbb;
                  }
                } while (local_e8.avail_out == 0);
                if (local_e8.avail_in != 0) {
                  uVar6 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar6,0x10);
                  if (cVar1 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x822;
                    local_4a = "zStream.avail_in == 0";
                    __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,
                                        0x16);
                  }
                  FUN_1001782e9(0,0);
                }
              } while (local_68 != 0);
              iVar2 = 0;
              pBVar4 = local_60;
              if (iVar3 == 1) goto LAB_1003e9a6b;
            }
            uVar6 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar6,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "zStatus == 1";
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            iVar2 = 0;
            FUN_1001782e9(0,0);
            pBVar4 = local_60;
          }
          else {
            uVar6 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar6,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "zStatus == 0";
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
            iVar2 = -0x32;
            pBVar4 = local_60;
          }
        }
        goto LAB_1003e9a6b;
      }
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "sourceData != nullptr";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      iVar2 = -0x6c;
    }
    else {
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
  pBVar5 = (Bytef *)0x0;
  pBVar4 = (Bytef *)0x0;
LAB_1003e9a6b:
  FUN_1001c64c1(pBVar4);
  FUN_1001c64c1(pBVar5);
  _deflateEnd(&local_e8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

