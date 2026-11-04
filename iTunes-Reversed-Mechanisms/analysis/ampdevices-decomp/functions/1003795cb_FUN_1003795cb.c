// name: FUN_1003795cb
// address: 1003795cb

void FUN_1003795cb(undefined8 *param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  void *context;
  undefined8 uVar4;
  undefined8 uVar5;
  dispatch_queue_t queue;
  bool bVar6;
  long lVar7;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008be020 == '\0') {
    context = (void *)FUN_1001c629e(0x38);
    if (context == (void *)0x0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "afcConnectionInfoCopy != nullptr";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      context = (void *)0x0;
      FUN_1001782e9(0);
    }
  }
  else {
    context = (void *)0x0;
  }
  uVar4 = *(undefined8 *)PTR__kCFRunLoopDefaultMode_10082e118;
  lVar7 = 0;
  bVar3 = false;
  bVar1 = true;
  do {
    bVar6 = bVar1;
    if (param_1[lVar7 + 5] != 0) {
      uVar5 = FUN_1001705fc(*(undefined8 *)(param_1[lVar7 + 5] + 0x10));
      _AFCConnectionUnscheduleFromRunLoop(param_1[lVar7 + 3],uVar5,uVar4);
      FUN_1001ed939(param_1[lVar7 + 5]);
      param_1[lVar7 + 5] = 0;
      FUN_10017060f(uVar5);
    }
    if (context == (void *)0x0) {
      FUN_1003797c0(param_1);
    }
    else {
      if (param_1[lVar7 + 3] != 0) {
        *(undefined8 *)((long)context + lVar7 * 8 + 0x18) = param_1[lVar7 + 3];
        param_1[lVar7 + 3] = 0;
        bVar3 = true;
      }
      if (param_1[lVar7 + 1] != 0) {
        *(undefined8 *)((long)context + lVar7 * 8 + 8) = param_1[lVar7 + 1];
        param_1[lVar7 + 1] = 0;
        bVar3 = true;
      }
    }
    lVar7 = 1;
    bVar1 = false;
  } while (bVar6);
  if (param_2 != '\0') {
    FUN_10017060f(*param_1);
    *param_1 = 0;
  }
  if (bVar3) {
    queue = _dispatch_get_global_queue(-2,0);
    _dispatch_async_f(queue,context,FUN_100379816);
  }
  else if (context != (void *)0x0) {
    operator_delete(context);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

