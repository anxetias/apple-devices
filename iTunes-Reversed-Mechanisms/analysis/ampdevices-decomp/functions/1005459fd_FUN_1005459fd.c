// name: FUN_1005459fd
// address: 1005459fd

char FUN_1005459fd(long param_1,uint param_2)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  short sVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined8 local_258;
  undefined1 local_250 [16];
  int local_240;
  int local_23c;
  long local_238;
  undefined1 local_229;
  undefined4 local_228;
  undefined8 local_224;
  undefined2 local_21c;
  char *local_21a;
  undefined1 local_210 [16];
  undefined1 local_200 [48];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [128];
  undefined4 local_120;
  undefined2 local_11c;
  undefined1 local_11a;
  undefined1 local_117;
  undefined1 local_10d;
  undefined1 local_10c;
  undefined1 local_58 [16];
  char local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b7a44(local_268);
  local_258 = 0;
  FUN_1001b7a44(local_250);
  if (param_1 == 0) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_228 = 0x8220202;
      local_224 = "Assertion failure";
      local_21c = 0x822;
      local_21a = "handlerData != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_228,0x16);
    }
    cVar4 = '\0';
    FUN_1001782e9(0,0);
  }
  else {
    FUN_1004fda52(&local_228,*(undefined4 *)(param_1 + 0x28));
    FUN_1001b80b2(local_250,&local_228);
    FUN_1001b7a50(&local_228);
    local_238 = param_1;
    cVar3 = FUN_1001fc52f(param_1,&local_258);
    local_229 = cVar3 != '\0';
    local_23c = (param_2 & 0xff) * 8 + 0x10cc0214;
    lVar7 = local_238;
    while( true ) {
      uVar1 = *(undefined4 *)(lVar7 + 0x66b0);
      FUN_1005d4cc2(&local_228);
      FUN_1001b8172((long)&local_224 + 4,local_250);
      FUN_1001c334a(local_278,0x10cf001b);
      FUN_1001b80b2(local_210,local_278);
      FUN_1001b7a50(local_278);
      uVar6 = FUN_100416f20(uVar1,local_23c);
      FUN_1001b81f2(local_200,uVar6);
      FUN_1001b8172(local_1d0,local_210);
      FUN_1001c334a(local_278,0x5db30004);
      FUN_1001b80b2(local_1c0,local_278);
      FUN_1001b7a50(local_278);
      local_120 = 0x20001;
      local_11a = 1;
      local_117 = 1;
      local_10d = 1;
      local_10c = local_229;
      local_11c = 0xe;
      if (cVar3 != '\0') {
        FUN_1001c334a(local_278,0x10cf001d);
        FUN_1001b80b2(local_1a0,local_278);
        FUN_1001b7a50(local_278);
      }
      sVar5 = FUN_1005d5016(&local_228);
      FUN_1001b8172(local_268,local_58);
      cVar2 = local_48;
      FUN_10021811e(&local_228);
      if (sVar5 != 1) {
        cVar4 = '\0';
        goto LAB_100545cbd;
      }
      uVar6 = FUN_1001b8d0c(local_268);
      cVar4 = FUN_1001fc8f3(local_238,0,uVar6,&local_240);
      FUN_10017060f(uVar6);
      lVar7 = local_238;
      if (cVar4 != '\0') break;
      uVar6 = FUN_100416f20(*(undefined4 *)(local_238 + 0x66b0),local_240 == -0x23 | 0x10cc0218);
      FUN_1001b7eb0(&local_228,uVar6);
      FUN_1004508b1(&local_228,local_250);
      FUN_1001b7a50(&local_228);
    }
    cVar4 = '\x01';
LAB_100545cbd:
    if ((cVar3 != '\0') && (cVar4 != '\0')) {
      if (cVar2 == '\0') {
        FUN_1001fc6d2(local_238,0);
      }
      else {
        uVar6 = FUN_1001b8d0c(local_268);
        FUN_1001fc6d2(local_238,uVar6);
        FUN_10017060f(uVar6);
      }
    }
    FUN_10017060f(local_258);
  }
  FUN_1001b7a50(local_250);
  FUN_1001b7a50(local_268);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return cVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

