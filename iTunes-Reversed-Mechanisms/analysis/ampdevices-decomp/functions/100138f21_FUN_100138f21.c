// name: FUN_100138f21
// address: 100138f21

undefined8 FUN_100138f21(undefined8 *param_1)

{
  void *pvVar1;
  pthread_key_t *ppVar2;
  code *pcVar3;
  
  ppVar2 = (pthread_key_t *)std::__thread_local_data();
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  _pthread_setspecific(*ppVar2,pvVar1);
  pcVar3 = (code *)param_1[1];
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1[3] + param_1[2]) + -1);
  }
  (*pcVar3)();
  FUN_100138fc0(param_1,0);
  operator_delete(param_1);
  return 0;
}

