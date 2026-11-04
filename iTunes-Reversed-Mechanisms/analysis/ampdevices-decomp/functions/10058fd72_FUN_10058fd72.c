// name: FUN_10058fd72
// address: 10058fd72

undefined8 FUN_10058fd72(undefined8 param_1,long param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_100495380();
  if (cVar1 == '\0') {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_4a = "ITImageLibraryIsValid(imageLibrary)";
LAB_10058ffcf:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if ((param_2 != 0) && (cVar1 = FUN_100495380(*(undefined8 *)(param_2 + 8)), cVar1 != '\0')) {
      *(undefined4 *)(param_2 + 0x50) = 0;
      if (*(long *)(param_2 + 0x58) != 0) {
        FUN_1001c64c1();
        *(undefined8 *)(param_2 + 0x58) = 0;
      }
      lVar3 = FUN_100496019(param_1);
      if (lVar3 == 0) {
        uVar5 = 0;
      }
      else {
        uVar6 = 0;
        do {
          uVar6 = uVar6 + (*(char *)(lVar3 + 0x83) == '\0');
          lVar3 = FUN_1004960d0(lVar3);
        } while (lVar3 != 0);
        uVar5 = 0;
        if (uVar6 != 0) {
          lVar3 = FUN_1001c6429((ulong)uVar6 << 4);
          *(long *)(param_2 + 0x58) = lVar3;
          if (lVar3 == 0) {
            uVar5 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar5,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "album->imageList != nullptr";
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
            uVar5 = 0xffffff94;
          }
          else {
            lVar3 = FUN_100496019(param_1);
            if (lVar3 != 0) {
              local_5c = 0;
              do {
                if ((*(char *)(lVar3 + 0x83) == '\0') &&
                   (iVar2 = FUN_10049b80b(param_2,local_5c,lVar3), iVar2 != -0x80)) {
                  if (iVar2 == 0) {
                    local_5c = local_5c + 1;
                  }
                  else {
                    uVar4 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar4,0x10);
                    if (cVar1 != '\0') {
                      local_58 = 0x8220202;
                      local_54 = "Assertion failure";
                      local_4c = 0x400;
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58
                                          ,0x12);
                    }
                  }
                }
                lVar3 = FUN_1004960d0(lVar3);
              } while (lVar3 != 0);
            }
            *(uint *)(param_2 + 0x50) = uVar6;
          }
        }
      }
      goto LAB_10058ff50;
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_4a = "ITImageAlbumIsValid(album)";
      goto LAB_10058ffcf;
    }
  }
  FUN_1001782e9(0,0);
  uVar5 = 0xffffffce;
LAB_10058ff50:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

