// name: FUN_100446d44
// address: 100446d44

void FUN_100446d44(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined1 local_90 [16];
  long local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [8];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_74 = param_2;
  lVar2 = FUN_100166844(param_1,PTR_cf_cookies_1008529d8);
  if (lVar2 != 0) {
    lVar3 = FUN_100166c1b(param_1,PTR_cf_url_100845a20);
    if (lVar3 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "url != __null";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      FUN_100151a22(local_60);
      local_80 = FUN_10017076e(lVar2);
      if (local_80 < 1) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "numItems > 0";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        local_70 = 0;
        FUN_1001782e9(0,0);
        local_68 = 0;
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_1001744bd(0,lVar3,0);
        local_70 = FUN_100174812(uVar4);
        local_68 = FUN_1001747ce(uVar4);
        lVar3 = 0;
        local_98 = uVar4;
        do {
          lVar5 = FUN_10016499b(lVar2,lVar3);
          if (lVar5 == 0) {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "cookieDict != __null";
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
          }
          else {
            FUN_100166f9c(local_b8,lVar5,PTR_cf_cookie_name_1008529e0);
            FUN_100166f9c(local_90,lVar5,PTR_cf_cookie_value_1008529e8);
            cVar1 = FUN_1001b8428(local_b8);
            if (cVar1 == '\0') {
              if ((char)local_74 == '\0') {
                FUN_1001b7eb0(&local_58,local_70);
                FUN_1001b7eb0(local_a8,local_68);
                FUN_100152b8e(local_60,local_b8,local_90,&local_58,local_a8);
              }
              else {
                FUN_1001b7eb0(&local_58,local_70);
                FUN_1001b7eb0(local_a8,local_68);
                FUN_10015292e(local_60,local_b8,local_90,&local_58,local_a8);
              }
              FUN_1001b7a50(local_a8);
              FUN_1001b7a50(&local_58);
            }
            else {
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              if (cVar1 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "cookieName.NotEmpty()";
                __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              FUN_1001782e9(0,0);
            }
            FUN_1001b7a50(local_90);
            FUN_1001b7a50(local_b8);
          }
          lVar3 = lVar3 + 1;
        } while (local_80 != lVar3);
        FUN_100151afa(local_60);
        uVar4 = local_98;
      }
      FUN_10017060f(uVar4);
      FUN_10017060f(local_70);
      FUN_10017060f(local_68);
      FUN_10017060f(0);
      FUN_100151a16(local_60);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

