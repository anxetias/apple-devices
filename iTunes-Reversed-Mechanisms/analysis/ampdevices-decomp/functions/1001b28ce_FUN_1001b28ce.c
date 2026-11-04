// name: FUN_1001b28ce
// address: 1001b28ce

void FUN_1001b28ce(long param_1)

{
  ipc_space_t task;
  char cVar1;
  kern_return_t kVar2;
  undefined8 uVar3;
  mach_port_name_t name;
  
  task = *(ipc_space_t *)PTR__mach_task_self__10082cee0;
  name = *(mach_port_name_t *)(param_1 + 0xb8);
  if (name + 1 < 2) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006a08c0(uVar3);
    }
    FUN_1001782e9(0,0);
    name = *(mach_port_name_t *)(param_1 + 0xb8);
  }
  kVar2 = _mach_port_mod_refs(task,name,1,-1);
  if ((kVar2 != -0x80) && (kVar2 != 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006a0936(kVar2,uVar3);
    }
  }
  kVar2 = _mach_port_deallocate(task,*(mach_port_name_t *)(param_1 + 0xb8));
  if ((kVar2 != -0x80) && (kVar2 != 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006a09a2(kVar2,uVar3);
    }
  }
  *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
  return;
}

