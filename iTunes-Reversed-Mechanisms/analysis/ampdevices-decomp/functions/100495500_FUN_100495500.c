// name: FUN_100495500
// address: 100495500

undefined4 * FUN_100495500(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar3 = (undefined4 *)FUN_1001c6429(0x2490);
  if (puVar3 == (undefined4 *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "imageLibrary != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x16);
    }
    puVar3 = (undefined4 *)0x0;
    FUN_1001782e9(0,0);
    goto LAB_1004955ba;
  }
  *puVar3 = 0x6974696c;
  puVar3[0x11] = 100;
  *(undefined8 *)(puVar3 + 0x510) = 0xffffffff;
  uVar4 = FUN_1001ea62b(0);
  *(undefined8 *)(puVar3 + 0x512) = uVar4;
  iVar2 = FUN_10049592a(puVar3,param_1);
  if (iVar2 == 0) {
    FUN_1001c2b73(puVar3 + 4);
    FUN_1001dcbb8(puVar3 + 0x1c,0);
    FUN_1001dcbb8(puVar3 + 0x30,1);
    lVar5 = 0x110;
    do {
      FUN_1001dcbb8((long)puVar3 + lVar5,0);
      lVar5 = lVar5 + 0x50;
    } while (lVar5 != 0x750);
    iVar2 = FUN_1001c572a(0xd8,500,puVar3 + 0x12);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        iVar2 = FUN_1001c572a(0x488,500,puVar3 + 0x14);
        if (iVar2 == -0x80) goto LAB_100495586;
        if (iVar2 == 0) {
          iVar2 = FUN_1001c572a(0x28,500,puVar3 + 0x16);
          if (iVar2 == -0x80) goto LAB_100495586;
          if (iVar2 == 0) {
            iVar2 = FUN_1001c572a(0xe8,0x32,puVar3 + 0x1a);
            if (iVar2 == -0x80) goto LAB_100495586;
            if (iVar2 == 0) {
              iVar2 = FUN_1001c572a(0xce0,0x32,puVar3 + 0x18);
              if ((iVar2 != -0x80) && (iVar2 != 0)) {
                uVar4 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar4,0x10);
                if (cVar1 != '\0') {
                  local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
                  goto LAB_100495904;
                }
              }
            }
            else {
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              if (cVar1 != '\0') {
                local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
LAB_100495904:
                local_3c = 0x400;
                local_44 = "Assertion failure";
                local_48 = 0x8220202;
                __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12)
                ;
              }
            }
          }
          else {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
              goto LAB_100495904;
            }
          }
        }
        else {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
            goto LAB_100495904;
          }
        }
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
          goto LAB_100495904;
        }
      }
      if (iVar2 == 0) goto LAB_1004955ba;
    }
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x400;
      local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
  }
LAB_100495586:
  FUN_100495a1c(puVar3);
  puVar3 = (undefined4 *)0x0;
LAB_1004955ba:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return puVar3;
}

