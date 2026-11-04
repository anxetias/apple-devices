// rea decompile_all
// name: _debug_usb_init_for_service
// address: 0x265474
// body: available
// range: 0x265474-0x265990 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * _debug_usb_init_for_service(int param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long *plVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined8 in_stack_ffffffffffffff28;
  undefined4 uVar12;
  undefined8 in_stack_ffffffffffffff30;
  undefined4 uVar13;
  undefined8 in_stack_ffffffffffffff38;
  undefined4 uVar14;
  undefined8 in_stack_ffffffffffffff40;
  undefined4 uVar15;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar16;
  undefined8 in_stack_ffffffffffffff50;
  uint uVar17;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar18;
  undefined8 in_stack_ffffffffffffff60;
  undefined4 uVar19;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar20;
  undefined8 in_stack_ffffffffffffff70;
  undefined4 uVar21;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar22;
  undefined8 local_78;
  undefined8 local_70;
  timespec local_68;
  long *local_58;
  char local_4c [4];
  long *local_48;
  int *local_40;
  int local_34;
  
  uVar12 = (undefined4)((ulong)in_stack_ffffffffffffff28 >> 0x20);
  uVar15 = (undefined4)((ulong)in_stack_ffffffffffffff40 >> 0x20);
  uVar16 = (undefined4)((ulong)in_stack_ffffffffffffff48 >> 0x20);
  uVar17 = (uint)((ulong)in_stack_ffffffffffffff50 >> 0x20);
  uVar18 = (undefined4)((ulong)in_stack_ffffffffffffff58 >> 0x20);
  uVar19 = (undefined4)((ulong)in_stack_ffffffffffffff60 >> 0x20);
  uVar20 = (undefined4)((ulong)in_stack_ffffffffffffff68 >> 0x20);
  uVar21 = (undefined4)((ulong)in_stack_ffffffffffffff70 >> 0x20);
  uVar22 = (undefined4)((ulong)in_stack_ffffffffffffff78 >> 0x20);
  uVar13 = (undefined4)((ulong)in_stack_ffffffffffffff30 >> 0x20);
  uVar14 = (undefined4)((ulong)in_stack_ffffffffffffff38 >> 0x20);
  if ((param_1 != 0) && (piVar8 = _malloc(0xb0), piVar8 != (int *)0x0)) {
    *piVar8 = param_1;
    ___bzero(piVar8 + 2,0xa1);
    uVar9 = _CFUUIDGetConstantUUIDWithBytes
                      (0,0x9d,199,0xb7,0x80,0x9e,CONCAT44(uVar12,0xc0),CONCAT44(uVar13,0x11),
                       CONCAT44(uVar14,0xd4),CONCAT44(uVar15,0xa5),CONCAT44(uVar16,0x4f),
                       (ulong)uVar17 << 0x20,CONCAT44(uVar18,10),CONCAT44(uVar19,0x27),
                       CONCAT44(uVar20,5),CONCAT44(uVar21,0x28),CONCAT44(uVar22,0x61));
    uVar10 = _CFUUIDGetConstantUUIDWithBytes
                       (0,0xc2,0x44,0xe8,0x58,0x10,0x9c,0x11,0xd4,0x91,0xd4,0,0x50,0xe4,0xc6,0x42,
                        0x6f);
    iVar5 = _IOCreatePlugInInterfaceForService(param_1,uVar9,uVar10,&local_48,&local_78);
    plVar3 = local_48;
    if ((iVar5 == 0) && (local_48 != (long *)0x0)) {
      pcVar1 = *(code **)(*local_48 + 8);
      local_70 = *(undefined8 *)PTR__kCFAllocatorSystemDefault_00441100;
      uVar9 = _CFUUIDGetConstantUUIDWithBytes
                        (local_70,0x56,0xad,8,0x9d,0x87,0x8d,0x4b,0xea,0xa1,0xf5,0x2c,0x8d,0xc4,0x3e
                         ,0x8a,0x98);
      auVar11 = _CFUUIDGetUUIDBytes(uVar9);
      iVar5 = (*pcVar1)(plVar3,auVar11._0_8_,auVar11._8_8_,&local_58);
      _IODestroyPlugInInterface(local_48);
      plVar3 = local_58;
      if ((iVar5 == 0) && (local_58 != (long *)0x0)) {
        *(long **)(piVar8 + 2) = local_58;
        iVar5 = (**(code **)(*local_58 + 0xb0))(local_58,local_4c);
        puVar2 = PTR___os_log_default_004412f0;
        if (iVar5 == 0) {
          local_40 = piVar8;
          if (local_4c[0] == '\x01') {
LAB_00265706:
            piVar8 = local_40;
            local_78 = 0xffffffffffffffff;
            local_34 = 0;
            iVar5 = (**(code **)(*plVar3 + 0xe0))(plVar3);
            if (iVar5 == 0) {
              if (local_34 == 0) {
                return piVar8;
              }
              iVar5 = _IOIteratorNext();
              if (iVar5 != 0) {
                bVar4 = false;
LAB_0026574d:
                if (bVar4) {
                  do {
                    _IOObjectRelease(iVar5);
                    iVar5 = _IOIteratorNext(local_34);
                  } while (iVar5 != 0);
LAB_00265962:
                  _IOObjectRelease(local_34);
                  return piVar8;
                }
                do {
                  uVar9 = _CFUUIDGetConstantUUIDWithBytes
                                    (0,0x2d,0x97,0x86,0xc6,0x9e,0xf3,0x11,0xd4,0xad,0x51,0,10,0x27,5
                                     ,0x28,0x61);
                  puVar2 = PTR___os_log_default_004412f0;
                  uVar10 = _CFUUIDGetConstantUUIDWithBytes
                                     (0,0xc2,0x44,0xe8,0x58,0x10,0x9c,0x11,0xd4,0x91,0xd4,0,0x50,
                                      0xe4,0xc6,0x42,0x6f);
                  iVar6 = _IOCreatePlugInInterfaceForService(iVar5,uVar9,uVar10,&local_48,local_4c);
                  plVar3 = local_48;
                  if ((iVar6 == 0) && (local_48 != (long *)0x0)) {
                    pcVar1 = *(code **)(*local_48 + 8);
                    uVar9 = _CFUUIDGetConstantUUIDWithBytes
                                      (local_70,0x87,0x52,0x66,0x3b,0xc0,0x7b,0x4b,0xae,0x95,0x84,
                                       0x22,3,0x2f,0xab,0x9c,0x5a);
                    auVar11 = _CFUUIDGetUUIDBytes(uVar9);
                    iVar6 = (*pcVar1)(plVar3,auVar11._0_8_,auVar11._8_8_,&local_58);
                    piVar8 = local_40;
                    _IODestroyPlugInInterface(local_48);
                    plVar3 = local_58;
                    if ((iVar6 == 0) && (local_58 != (long *)0x0)) {
                      *(long **)(piVar8 + 4) = local_58;
                      iVar6 = 0;
                      do {
                        iVar7 = (**(code **)(*plVar3 + 0x40))(plVar3);
                        piVar8 = local_40;
                        if (iVar7 != -0x1ffffd3b) {
                          if (iVar7 == 0) {
                            *(undefined1 *)(local_40 + 0x2a) = 1;
                            iVar5 = _IOIteratorNext();
                            bVar4 = true;
                            if (iVar5 != 0) goto LAB_0026574d;
                            goto LAB_00265962;
                          }
                          break;
                        }
                        __os_log_internal(0,puVar2,0,
                                          "Interface in use by another client. %d retries used.",
                                          iVar6);
                        local_68.tv_sec = 0;
                        local_68.tv_nsec = 100000000;
                        _nanosleep(&local_68,(timespec *)0x0);
                        iVar6 = iVar6 + 1;
                        piVar8 = local_40;
                      } while (iVar6 != 5);
                    }
                  }
                  _debug_usb_destroy_interface(piVar8);
                  _IOObjectRelease(iVar5);
                  iVar5 = _IOIteratorNext();
                } while (iVar5 != 0);
              }
              _IOObjectRelease(local_34);
            }
          }
          else {
            iVar5 = 0;
            do {
              iVar6 = (**(code **)(*plVar3 + 0x40))(plVar3);
              if (iVar6 != -0x1ffffd3b) {
                piVar8 = local_40;
                if (iVar6 == 0) {
                  iVar5 = (**(code **)(*plVar3 + 0xb8))(plVar3,1);
                  (**(code **)(*plVar3 + 0x48))(plVar3);
                  piVar8 = local_40;
                  if (iVar5 == 0) goto LAB_00265706;
                }
                break;
              }
              __os_log_internal(0,puVar2,0,"Device in use by another client. %d retries used.",iVar5
                               );
              local_68.tv_sec = 0;
              local_68.tv_nsec = 100000000;
              _nanosleep(&local_68,(timespec *)0x0);
              iVar5 = iVar5 + 1;
              piVar8 = local_40;
            } while (iVar5 != 5);
          }
        }
      }
    }
    _debug_usb_free(piVar8);
  }
  return (int *)0x0;
}

