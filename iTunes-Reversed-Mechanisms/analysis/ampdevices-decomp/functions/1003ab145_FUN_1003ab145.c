// name: FUN_1003ab145
// address: 1003ab145

uint FUN_1003ab145(long param_1,uint param_2)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 local_70 [4];
  undefined4 local_6c;
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  undefined1 local_60 [4];
  undefined1 local_5c [20];
  uint local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_70[0] = 0;
  local_6c = 0;
  uVar8 = 0;
  if (param_2 != 0 && param_1 != 0) {
    lVar4 = FUN_1001c63e1(param_2 * 2);
    if (lVar4 == 0) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "lyricsPtr != nullptr";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
      uVar8 = 0;
    }
    else {
      uVar7 = 0;
      do {
        uVar1 = *(ushort *)(param_1 + uVar7 * 2);
        *(ushort *)(lVar4 + uVar7 * 2) = uVar1 << 8 | uVar1 >> 8;
        uVar7 = uVar7 + 1;
      } while (param_2 != uVar7);
      iVar3 = FUN_1001798b8(1,lVar4,param_2 * 2,local_70);
      uVar8 = 0;
      if (iVar3 != -0x80) {
        if (iVar3 == 0) {
          FUN_1001c631b(local_68,&local_48,4);
          uVar9 = local_48;
          FUN_1001c631b(local_64,&local_48,4);
          uVar9 = uVar9 ^ local_48;
          FUN_1001c631b(local_60,&local_48,4);
          uVar9 = uVar9 ^ local_48;
          FUN_1001c631b(local_5c,&local_48,4);
          uVar6 = local_48 ^ uVar9;
          uVar8 = 1;
          if (uVar9 != local_48) {
            uVar8 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
          }
        }
        else {
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          uVar8 = 0;
          if (cVar2 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x400;
            local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
          }
        }
      }
    }
    FUN_1001c64c1(lVar4);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar8;
}

