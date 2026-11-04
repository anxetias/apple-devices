// name: FUN_1003513f0
// address: 1003513f0

int FUN_1003513f0(long param_1,long param_2,long param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  undefined8 uVar6;
  ushort uVar7;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_100351502:
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_4a = "ArtistInfoIsValid(inArtistInfo1)";
LAB_10035160a:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 0x58) != 0x61747369) {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "inArtistInfo->mMagic == kArtistInfoMagic";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar3 = FUN_1001782e9(0,1);
      if (cVar3 == '\0') goto LAB_100351502;
    }
    if (*(long *)(param_1 + 8) == 0) goto LAB_100351502;
    lVar1 = *(long *)(param_2 + 0x28);
    if (lVar1 == 0) {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 == '\0') goto LAB_10035151f;
      local_4a = "albumInfo1 != __null";
      goto LAB_10035160a;
    }
    lVar2 = *(long *)(param_3 + 0x28);
    if (lVar2 != 0) {
      uVar7 = *(ushort *)(lVar1 + 0xf8);
      if ((uVar7 & 8) == 0) {
        FUN_1003a152c(lVar1);
        uVar7 = *(ushort *)(lVar1 + 0xf8);
      }
      uVar4 = *(ushort *)(lVar2 + 0xf8);
      if ((uVar4 & 8) == 0) {
        FUN_1003a152c(lVar2);
        uVar4 = *(ushort *)(lVar2 + 0xf8);
      }
      if ((uVar7 & 0x30) == 0x10) {
        iVar5 = 1;
        if ((uVar4 & 0x30) == 0x10) {
          local_58 = 0x2711;
          local_54 = (char *)CONCAT44(local_54._4_4_,param_4);
          iVar5 = FUN_10055f58b(param_2,param_3);
        }
      }
      else {
        iVar5 = -(uint)((uVar4 & 0x30) == 0x10);
      }
      goto LAB_10035152b;
    }
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_4a = "albumInfo2 != __null";
      goto LAB_10035160a;
    }
  }
LAB_10035151f:
  iVar5 = 0;
  FUN_1001782e9(0,0);
LAB_10035152b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

