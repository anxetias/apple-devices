// name: FUN_1005eb95e
// address: 1005eb95e

void FUN_1005eb95e(int param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined8 local_54;
  undefined2 local_4c;
  char *local_4a;
  undefined2 local_42;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0x61706474) || (param_1 == 0x6170646c)) {
    FUN_1005e9a2c();
    lVar2 = FUN_1001737f8(param_2);
    if ((lVar2 != 0) && ((cVar1 = FUN_1002483f2(param_2), cVar1 != '\0' && (DAT_1008c7bc0 != 0)))) {
      pcVar4 = "terminated";
      if (param_1 == 0x6170646c) {
        pcVar4 = "launched";
      }
      lVar2 = DAT_1008c7bc0;
      do {
        if (*(char *)(lVar2 + 4) == '\x01') {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar3 = DAT_1008c75b8;
          cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar1 != '\0') {
            FUN_1005e73f0(local_68,lVar2);
            local_40 = FUN_1001b83ae(local_68);
            local_58 = 0x8420302;
            local_4c = 0x822;
            local_42 = 0x822;
            local_54 = param_3;
            local_4a = pcVar4;
            __os_log_impl(0x100000000,uVar3,1,
                          "%{public}@ was %{public}s, refreshing software info for device %{public}s"
                          ,&local_58,0x20);
            FUN_1001b7a50(local_68);
          }
          uVar3 = FUN_1001c156e();
          FUN_1001c6987(uVar3,0x69707369,*(undefined4 *)(lVar2 + 0x6884),0,0);
        }
        lVar2 = *(long *)(lVar2 + 0x6878);
      } while (lVar2 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

