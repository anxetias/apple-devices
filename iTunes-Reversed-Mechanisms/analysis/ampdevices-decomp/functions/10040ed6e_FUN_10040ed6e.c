// name: FUN_10040ed6e
// address: 10040ed6e

void FUN_10040ed6e(long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *context;
  
  if (*param_2 == 0) {
    context = operator_new(0x2c);
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = *(undefined8 *)(param_1 + 0x2c);
    *(undefined8 *)((long)context + 0x1c) = *(undefined8 *)(param_1 + 0x24);
    *(undefined8 *)((long)context + 0x24) = uVar5;
    context[2] = uVar3;
    context[3] = uVar4;
    *context = uVar1;
    context[1] = uVar2;
    _dispatch_async_f((dispatch_queue_t)PTR___dispatch_main_q_10082cb60,context,FUN_10040edf8);
  }
  FUN_1001e9809(*(undefined8 *)(param_1 + 0x38));
  return;
}

