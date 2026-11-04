// name: FUN_1004cb99c
// address: 1004cb99c

void FUN_1004cb99c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  undefined8 *context;
  dispatch_time_t when;
  cfstringStruct *local_80;
  undefined8 local_78;
  long lStack_70;
  undefined1 local_68 [8];
  undefined1 local_60 [16];
  long local_50;
  long local_40;
  undefined1 local_38 [8];
  
  FUN_1001aab14(&local_78);
  iVar3 = FUN_1001ba026(&local_78,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
  if (iVar3 == 0) {
    lVar4 = FUN_1001aab4a(param_2);
    FUN_1001b7a50(&local_78);
    if (lVar4 == 0x1d53) {
      local_80 = &cf_HTTPStatus;
      FUN_1001aab60(&local_78,param_2);
      FUN_1001a7b90(local_38,&local_80);
      bVar2 = FUN_1001a9810(&local_78,local_38,&local_40);
      FUN_1001ab240(local_38);
      FUN_1001a8fac(&local_78);
      if (((((bVar2 & local_40 - 500U < 100) == 1) &&
           (uVar1 = *(ulong *)(param_1 + 0x30), uVar1 < 0x3c1)) &&
          (lStack_70 = *(long *)(param_1 + 0x10), lStack_70 != 0)) &&
         (*(long *)(lStack_70 + 8) != -1)) {
        lVar4 = 0x78;
        if (uVar1 != 0) {
          lVar4 = uVar1 * 2;
        }
        local_78 = *(undefined8 *)(param_1 + 8);
        LOCK();
        *(long *)(lStack_70 + 0x10) = *(long *)(lStack_70 + 0x10) + 1;
        UNLOCK();
        FUN_1001a8c1c(local_68,param_1 + 0x18);
        FUN_1001a7a9e(local_60,param_1 + 0x20);
        local_50 = lVar4;
        context = operator_new(0x30);
        *context = local_78;
        context[1] = lStack_70;
        local_78 = 0;
        lStack_70 = 0;
        FUN_1001a8c1c(context + 2,local_68);
        FUN_1001a7a9e(context + 3,local_60);
        context[5] = local_50;
        when = _dispatch_time(0,lVar4 * 1000000000);
        local_40 = 0;
        _dispatch_after_f(when,(dispatch_queue_t)PTR___dispatch_main_q_10082cb60,context,
                          FUN_1004cbcf6);
        FUN_1004cbcac(&local_40);
        FUN_1001a7a94(local_60);
        FUN_1001ab006(local_68);
        if (lStack_70 != 0) {
          std::__shared_weak_count::__release_weak();
        }
      }
    }
  }
  else {
    FUN_1001b7a50(&local_78);
  }
  return;
}

