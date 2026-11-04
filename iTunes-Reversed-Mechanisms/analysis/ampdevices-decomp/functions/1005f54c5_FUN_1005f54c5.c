// name: FUN_1005f54c5
// address: 1005f54c5

void FUN_1005f54c5(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *context;
  
  uVar1 = FUN_1001705fc();
  context = operator_new(0x18);
  *context = uVar1;
  *(undefined4 *)(context + 1) = param_3;
  context[2] = param_4;
  _dispatch_async_f((dispatch_queue_t)PTR___dispatch_main_q_10082cb60,context,FUN_1005f57f8);
  return;
}

