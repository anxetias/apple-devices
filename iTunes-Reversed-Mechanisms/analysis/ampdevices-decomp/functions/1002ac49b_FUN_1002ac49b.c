// name: FUN_1002ac49b
// address: 1002ac49b

uint FUN_1002ac49b(undefined8 param_1,long param_2,ulong param_3,undefined4 param_4)

{
  uint uVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  undefined1 local_298 [16];
  undefined8 local_288;
  undefined8 local_280;
  ulong local_278;
  undefined4 local_26c;
  ulong local_268;
  undefined4 local_25c;
  undefined4 local_258;
  undefined8 local_254;
  undefined2 local_24c;
  ulong local_24a;
  undefined2 local_242;
  undefined4 local_240;
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar1 = *(uint *)(*(long *)(param_2 + 0x78) + 0x18);
  local_288 = param_1;
  local_26c = param_4;
  uVar3 = FUN_1002abbfa();
  uVar6 = 0;
  local_278 = param_3;
  if (param_3 < uVar3 && uVar1 != 0) {
    uVar4 = CONCAT71((int7)(uVar3 >> 8),1);
    do {
      local_268 = CONCAT44(local_268._4_4_,(int)uVar4);
      while ((lVar5 = FUN_10037ddf6(*(undefined8 *)(param_2 + 0x3c0),0x77,1,uVar6), lVar5 == 0 ||
             (((char)local_26c == '\0' && ((*(byte *)(*(long *)(lVar5 + 8) + 0xc6) & 4) == 0))))) {
        uVar6 = uVar6 + 1;
        if ((uVar1 <= uVar6) || (uVar3 <= local_278)) {
          if ((local_268 & 1) == 0) goto LAB_1002ac6a5;
          uVar6 = 0;
          goto LAB_1002ac6b2;
        }
      }
      local_25c = 0;
      local_268 = FUN_1002abe50(local_288,lVar5,&local_25c);
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      local_280 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar2 != '\0') {
        FUN_10048687f(lVar5,local_238);
        FUN_1001b8dfc(local_298,local_238);
        local_254 = FUN_1001b83ae(local_298);
        local_258 = 0x8220302;
        local_24c = 0x800;
        local_24a = local_268;
        local_242 = 0x400;
        local_240 = local_25c;
        __os_log_impl(0x100000000,local_280,1,
                      "sync> deleting autofilled track \"%{public}s\", size = %llu, speech size = %u"
                      ,&local_258,0x1c);
        FUN_1001b7a50(local_298);
      }
      FUN_1004861af(lVar5,1);
      uVar6 = uVar6 + 1;
      if (uVar1 <= uVar6) break;
      uVar3 = uVar3 - local_268;
      uVar4 = 0;
    } while (local_278 < uVar3);
LAB_1002ac6a5:
    FUN_10048ac76(param_2,0);
    uVar6 = 1;
  }
LAB_1002ac6b2:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

