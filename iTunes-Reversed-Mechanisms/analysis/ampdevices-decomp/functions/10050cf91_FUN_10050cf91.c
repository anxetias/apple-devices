// name: FUN_10050cf91
// address: 10050cf91

void FUN_10050cf91(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined4 local_228;
  char *local_224;
  undefined2 local_21c;
  char *local_21a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar4 = DAT_1008c75b8;
  cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
  if (cVar1 != '\0') {
    local_224 = (char *)FUN_10026647d(param_1);
    local_228 = 0x8000100;
    __os_log_impl(0x100000000,uVar4,0x10,"setup> another user or process is using device id %016llX"
                  ,&local_228,0xc);
  }
  uVar2 = FUN_100266214(param_1);
  uVar4 = FUN_100416f20(uVar2,0x10cc0063);
  FUN_1001b7eb0(local_268,uVar4);
  FUN_100266351(param_1,&local_228);
  FUN_1001b8dfc(local_248,&local_228);
  cVar1 = FUN_1001b8428(local_248);
  if (cVar1 == '\0') {
    uVar4 = FUN_100416f20(uVar2,0x10cc0064);
    FUN_1001b7eb0(&local_228,uVar4);
    FUN_1001bbec4(local_238,&local_228,local_248);
    FUN_1001b7a50(&local_228);
  }
  else {
    uVar4 = FUN_100416f20(uVar2,0x10cc0065);
    FUN_1001b7eb0(local_238,uVar4);
  }
  FUN_1001b7a44(&local_228);
  FUN_1001b7a44(local_258);
  FUN_10021a205(&local_228,local_268,local_258,local_238,0,0,0,0,0);
  FUN_1001b7a50(local_258);
  FUN_1001b7a50(&local_228);
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_228 = 0x8220202;
      local_224 = "Assertion failure";
      local_21c = 0x822;
      local_21a = "podRef != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_228,0x16);
    }
    uVar4 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    iVar3 = FUN_100266214(param_1);
    if (iVar3 == 0x69506f64) {
      uVar4 = FUN_10026647d(param_1);
      uVar4 = FUN_100634e69(uVar4);
    }
    else {
      uVar4 = FUN_10055ae0c(param_1);
      uVar4 = _AMDeviceCopyDeviceIdentifier(uVar4);
    }
  }
  uVar5 = FUN_1001c156e();
  FUN_1001c6987(uVar5,0x69706472,0,uVar4,0);
  FUN_10017060f(uVar4);
  FUN_100264ec8(param_1);
  FUN_1001b7a50(local_238);
  FUN_1001b7a50(local_248);
  FUN_1001b7a50(local_268);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

