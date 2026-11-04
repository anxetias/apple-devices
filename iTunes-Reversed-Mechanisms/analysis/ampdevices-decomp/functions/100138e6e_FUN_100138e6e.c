// name: FUN_100138e6e
// address: 100138e6e

void FUN_100138e6e(pthread_t *param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  int iVar3;
  __thread_struct *this;
  undefined8 *puVar4;
  
  this = operator_new(8);
  std::__thread_struct::__thread_struct(this);
  puVar4 = operator_new(0x20);
  *puVar4 = this;
  uVar2 = param_2[1];
  puVar4[1] = *param_2;
  puVar4[2] = uVar2;
  puVar4[3] = *param_3;
  iVar3 = _pthread_create(param_1,(pthread_attr_t *)0x0,(void **)FUN_100138f21,puVar4);
  if (iVar3 == 0) {
    return;
  }
  std::__throw_system_error(iVar3,"thread constructor failed");
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

