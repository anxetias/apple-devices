// name: FUN_1001a8df8
// address: 1001a8df8

void FUN_1001a8df8(undefined8 *param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  logic_error *this;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *local_50;
  long *local_48;
  long *local_38;
  long *local_30;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  FUN_1001a8200(&local_50,param_3);
  FUN_1001a8200(&local_38,param_3);
  if (param_3 == 0) {
    lVar3 = 0;
  }
  else {
    plVar6 = param_2 + param_3 * 2;
    lVar3 = 0;
    plVar4 = local_38;
    plVar5 = local_50;
    do {
      if (*param_2 == 0) {
        this = (logic_error *)___cxa_allocate_exception(0x10,plVar5,plVar4,lVar3);
        std::logic_error::logic_error(this,"NULL key");
        *(undefined **)this = PTR_vtable_10082c9e0 + 0x10;
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(this,PTR_typeinfo_10082e988,PTR__invalid_argument_10082c838);
      }
      lVar1 = param_2[1];
      if (lVar1 != 0) {
        *plVar5 = *param_2;
        plVar5 = plVar5 + 1;
        *plVar4 = lVar1;
        plVar4 = plVar4 + 1;
        lVar3 = lVar3 + 1;
      }
      param_2 = param_2 + 2;
    } while (param_2 != plVar6);
  }
  uVar2 = _CFDictionaryCreate(DAT_1008c4d98,local_50,local_38,lVar3,
                              PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                              PTR__kCFTypeDictionaryValueCallBacks_10082e140);
  *param_1 = uVar2;
  if (local_38 != (long *)0x0) {
    local_30 = local_38;
    operator_delete(local_38);
  }
  if (local_50 != (long *)0x0) {
    local_48 = local_50;
    operator_delete(local_50);
  }
  return;
}

