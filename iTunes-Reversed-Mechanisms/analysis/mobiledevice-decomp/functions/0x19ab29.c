// rea decompile_all
// name: _handle_shared_spi
// address: 0x19ab29
// body: available
// range: 0x19ab29-0x19ae1c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _handle_shared_spi(undefined8 *param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  char cVar8;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  
  if (param_2 == 0) {
    if (*(char *)((long)param_1 + 0x67) == '\0') {
      return 0;
    }
  }
  else if (*(char *)((long)param_1 + 0x67) != '\0') {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 1);
  if (*(int *)(param_1 + 1) == 0) {
    local_34 = 0;
    uVar4 = _get_retimer_service(*(undefined1 *)((long)param_1 + 0x66));
    if (uVar4 != 0) {
      return (ulong)uVar4;
    }
    if (local_34 == 0) {
      return 0;
    }
    *(int *)(param_1 + 1) = local_34;
    iVar2 = local_34;
  }
  if ((char)param_2 == '\0') {
    uVar4 = _get_retimer_nor_access(iVar2,0);
    if (uVar4 == 0) {
      *(undefined1 *)((long)param_1 + 0x67) = 0;
      return 0;
    }
    uVar7 = (ulong)uVar4;
    uVar5 = (ulong)*(byte *)((long)param_1 + 0x66);
    if (_inRestore != '\x01') {
      pcVar6 = "Error when relinquishing shared SPI access on RID%u status=0x%X\n";
      goto LAB_0019aca2;
    }
    pcVar6 = "Error when relinquishing shared SPI access on RID%u status=0x%X\n";
  }
  else {
    plVar3 = (long *)*param_1;
    local_3c = 0;
    _getAHPMAddressForRID(*(undefined1 *)((long)param_1 + 0x66),&local_3c);
    uVar4 = (**(code **)(*plVar3 + 0x80))(plVar3,local_3c,param_2 & 0xff,0);
    if (uVar4 == 0) {
      _delay_ms(1000);
      cVar8 = '\x03';
      do {
        uVar4 = _get_retimer_nor_access(*(undefined4 *)(param_1 + 1),1);
        if (uVar4 == 0) {
          *(undefined1 *)((long)param_1 + 0x67) = 1;
          return 0;
        }
        uVar7 = (ulong)uVar4;
        _delay_ms(100);
        cVar8 = cVar8 + -1;
      } while (cVar8 != '\0');
      cVar8 = _os_parse_boot_arg_string("-restore",0,0);
      if (cVar8 != '\0') {
        bVar1 = *(byte *)((long)param_1 + 0x66);
        if (bVar1 == 0) {
          if (_inRestore != '\0') {
            _printf("RID0 cannot get exlusive access from retimer, status=0x%X, will assume implicit permission\n"
                    ,uVar7);
            return 0;
          }
          _uarpLogError(3,
                        "RID0 cannot get exlusive access from retimer, status=0x%X, will assume implicit permission\n"
                        ,uVar7);
          return 0;
        }
        if (_inRestore == '\0') {
          _uarpLogError(3,
                        "Forcing retimer at RID%u into DFU due to failure to get exclusive access, status=0x%X\n"
                        ,bVar1,uVar7);
        }
        else {
          _printf("Forcing retimer at RID%u into DFU due to failure to get exclusive access, status=0x%X\n"
                  ,(ulong)bVar1,uVar7);
        }
        plVar3 = (long *)*param_1;
        local_38 = 0;
        _getAHPMAddressForRID(*(undefined1 *)((long)param_1 + 0x66),&local_38);
        uVar4 = (**(code **)(*plVar3 + 0x78))(plVar3,local_38,1,0);
        if (uVar4 != 0) {
          uVar5 = (ulong)uVar4;
          if (_inRestore == '\x01') {
            _printf("Error when forcing ATCRT update on RID%u status=0x%X\n",
                    (ulong)*(byte *)((long)param_1 + 0x66),uVar5);
          }
          else {
            _uarpLogError(3,"Error when forcing ATCRT update on RID%u status=0x%X\n",
                          *(byte *)((long)param_1 + 0x66),uVar5);
          }
          (**(code **)(*plVar3 + 0x78))(plVar3,local_38,0,0);
          if (_inRestore != '\x01') {
            _uarpLogError(3,"Failed to force retimer at RID%u into DFU, status=0x%X\n",
                          *(byte *)((long)param_1 + 0x66),uVar5);
            return uVar5;
          }
          _printf("Failed to force retimer at RID%u into DFU, status=0x%X\n",
                  (ulong)*(byte *)((long)param_1 + 0x66),uVar5);
          return uVar5;
        }
        return 0;
      }
      uVar5 = (ulong)*(byte *)((long)param_1 + 0x66);
      if (_inRestore != '\x01') {
        pcVar6 = "RID%u not in restore and getting exclusive access failed, status=0%X\n";
LAB_0019aca2:
        _uarpLogError(3,pcVar6,uVar5,uVar7);
        return uVar7;
      }
      pcVar6 = "RID%u not in restore and getting exclusive access failed, status=0%X\n";
    }
    else {
      uVar7 = (ulong)uVar4;
      uVar5 = (ulong)*(byte *)((long)param_1 + 0x66);
      if (_inRestore != '\x01') {
        pcVar6 = "Error when powering on retimer on RID%u status=0x%X\n";
        goto LAB_0019aca2;
      }
      pcVar6 = "Error when powering on retimer on RID%u status=0x%X\n";
    }
  }
  _printf(pcVar6,uVar5,uVar7);
  return uVar7;
}

