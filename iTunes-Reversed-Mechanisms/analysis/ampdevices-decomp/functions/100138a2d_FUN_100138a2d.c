// name: FUN_100138a2d
// address: 100138a2d

__assoc_sub_state * FUN_100138a2d(__assoc_sub_state *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = operator_new(0xf0);
  plVar2[1] = 0;
  plVar2[2] = 0;
  plVar2[3] = 0x32aaaba7;
  plVar2[4] = 0;
  plVar2[5] = 0;
  plVar2[6] = 0;
  plVar2[7] = 0;
  plVar2[8] = 0;
  plVar2[9] = 0;
  plVar2[10] = 0;
  plVar2[0xb] = 0x3cb0b1bb;
  plVar2[0xc] = 0;
  plVar2[0xd] = 0;
  plVar2[0xe] = 0;
  plVar2[0xf] = 0;
  *(undefined8 *)((long)plVar2 + 0x7c) = 0;
  *(undefined8 *)((long)plVar2 + 0x84) = 0;
  *plVar2 = (long)&PTR_FUN_100839a30;
  FUN_100138d44(plVar2 + 0x12,param_2);
  plVar3 = plVar2 + 1;
  *(byte *)(plVar2 + 0x11) = *(byte *)(plVar2 + 0x11) | 8;
  std::future<void>::future(param_1);
  LOCK();
  lVar1 = *plVar3;
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (lVar1 == 0) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return param_1;
}

