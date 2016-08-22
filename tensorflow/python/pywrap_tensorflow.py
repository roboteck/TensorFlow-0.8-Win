# This file was automatically generated by SWIG (http://www.swig.org).
# Version 3.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.





from sys import version_info as _swig_python_version_info
if _swig_python_version_info >= (2, 7, 0):
    def swig_import_helper():
        import importlib
        pkg = __name__.rpartition('.')[0]
        mname = '.'.join((pkg, '_pywrap_tensorflow')).lstrip('.')
        try:
            return importlib.import_module(mname)
        except ImportError:
            return importlib.import_module('_pywrap_tensorflow')
    _pywrap_tensorflow = swig_import_helper()
    del swig_import_helper
elif _swig_python_version_info >= (2, 6, 0):
    def swig_import_helper():
        from os.path import dirname
        import imp
        fp = None
        try:
            fp, pathname, description = imp.find_module('_pywrap_tensorflow', [dirname(__file__)])
        except ImportError:
            import _pywrap_tensorflow
            return _pywrap_tensorflow
        if fp is not None:
            try:
                _mod = imp.load_module('_pywrap_tensorflow', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _pywrap_tensorflow = swig_import_helper()
    del swig_import_helper
else:
    import _pywrap_tensorflow
del _swig_python_version_info
try:
    _swig_property = property
except NameError:
    pass  # Python < 2.2 doesn't have 'property'.

try:
    import builtins as __builtin__
except ImportError:
    import __builtin__

def _swig_setattr_nondynamic(self, class_type, name, value, static=1):
    if (name == "thisown"):
        return self.this.own(value)
    if (name == "this"):
        if type(value).__name__ == 'SwigPyObject':
            self.__dict__[name] = value
            return
    method = class_type.__swig_setmethods__.get(name, None)
    if method:
        return method(self, value)
    if (not static):
        if _newclass:
            object.__setattr__(self, name, value)
        else:
            self.__dict__[name] = value
    else:
        raise AttributeError("You cannot add attributes to %s" % self)


def _swig_setattr(self, class_type, name, value):
    return _swig_setattr_nondynamic(self, class_type, name, value, 0)


def _swig_getattr(self, class_type, name):
    if (name == "thisown"):
        return self.this.own()
    method = class_type.__swig_getmethods__.get(name, None)
    if method:
        return method(self)
    raise AttributeError("'%s' object has no attribute '%s'" % (class_type.__name__, name))


def _swig_repr(self):
    try:
        strthis = "proxy of " + self.this.__repr__()
    except __builtin__.Exception:
        strthis = ""
    return "<%s.%s; %s >" % (self.__class__.__module__, self.__class__.__name__, strthis,)

try:
    _object = object
    _newclass = 1
except __builtin__.Exception:
    class _object:
        pass
    _newclass = 0


def IsGoogleCudaEnabled():
    return _pywrap_tensorflow.IsGoogleCudaEnabled()
IsGoogleCudaEnabled = _pywrap_tensorflow.IsGoogleCudaEnabled

def CheckpointReader_GetTensor(reader, name, out_status):
    return _pywrap_tensorflow.CheckpointReader_GetTensor(reader, name, out_status)
CheckpointReader_GetTensor = _pywrap_tensorflow.CheckpointReader_GetTensor

def NewCheckpointReader(filepattern):
  from tensorflow.python.framework import errors
  with errors.raise_exception_on_not_ok_status() as status:
    from tensorflow.python.util import compat
    return CheckpointReader(compat.as_bytes(filepattern), status)

class CheckpointReader(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, CheckpointReader, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, CheckpointReader, name)
    __repr__ = _swig_repr
    __swig_destroy__ = _pywrap_tensorflow.delete_CheckpointReader
    __del__ = lambda self: None

    def _HasTensor(self, name):
        return _pywrap_tensorflow.CheckpointReader__HasTensor(self, name)

    def debug_string(self):
        return _pywrap_tensorflow.CheckpointReader_debug_string(self)

    def get_variable_to_shape_map(self):
        return _pywrap_tensorflow.CheckpointReader_get_variable_to_shape_map(self)

    def __init__(self, filepattern, out_status):
        this = _pywrap_tensorflow.new_CheckpointReader(filepattern, out_status)
        try:
            self.this.append(this)
        except __builtin__.Exception:
            self.this = this

    def has_tensor(self, tensor_str):
      from tensorflow.python.util import compat
      return self._HasTensor(compat.as_bytes(tensor_str))

    def get_tensor(self, tensor_str):
      from tensorflow.python.framework import errors
      with errors.raise_exception_on_not_ok_status() as status:
        from tensorflow.python.util import compat
        return CheckpointReader_GetTensor(self, compat.as_bytes(tensor_str),
                                          status)

CheckpointReader_swigregister = _pywrap_tensorflow.CheckpointReader_swigregister
CheckpointReader_swigregister(CheckpointReader)


def InitializePyTrampoline(trampoline):
    return _pywrap_tensorflow.InitializePyTrampoline(trampoline)
InitializePyTrampoline = _pywrap_tensorflow.InitializePyTrampoline
class PyRecordReader(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, PyRecordReader, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, PyRecordReader, name)

    def __init__(self, *args, **kwargs):
        raise AttributeError("No constructor defined")
    __repr__ = _swig_repr
    if _newclass:
        New = staticmethod(_pywrap_tensorflow.PyRecordReader_New)
    else:
        New = _pywrap_tensorflow.PyRecordReader_New
    __swig_destroy__ = _pywrap_tensorflow.delete_PyRecordReader
    __del__ = lambda self: None

    def GetNext(self):
        return _pywrap_tensorflow.PyRecordReader_GetNext(self)

    def record(self):
        return _pywrap_tensorflow.PyRecordReader_record(self)

    def offset(self):
        return _pywrap_tensorflow.PyRecordReader_offset(self)

    def Close(self):
        return _pywrap_tensorflow.PyRecordReader_Close(self)
PyRecordReader_swigregister = _pywrap_tensorflow.PyRecordReader_swigregister
PyRecordReader_swigregister(PyRecordReader)

def PyRecordReader_New(filename, start_offset):
    return _pywrap_tensorflow.PyRecordReader_New(filename, start_offset)
PyRecordReader_New = _pywrap_tensorflow.PyRecordReader_New

class PyRecordWriter(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, PyRecordWriter, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, PyRecordWriter, name)

    def __init__(self, *args, **kwargs):
        raise AttributeError("No constructor defined")
    __repr__ = _swig_repr
    if _newclass:
        New = staticmethod(_pywrap_tensorflow.PyRecordWriter_New)
    else:
        New = _pywrap_tensorflow.PyRecordWriter_New
    __swig_destroy__ = _pywrap_tensorflow.delete_PyRecordWriter
    __del__ = lambda self: None

    def WriteRecord(self, record):
        return _pywrap_tensorflow.PyRecordWriter_WriteRecord(self, record)

    def Close(self):
        return _pywrap_tensorflow.PyRecordWriter_Close(self)
PyRecordWriter_swigregister = _pywrap_tensorflow.PyRecordWriter_swigregister
PyRecordWriter_swigregister(PyRecordWriter)

def PyRecordWriter_New(filename):
    return _pywrap_tensorflow.PyRecordWriter_New(filename)
PyRecordWriter_New = _pywrap_tensorflow.PyRecordWriter_New

class EventsWriter(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, EventsWriter, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, EventsWriter, name)
    __repr__ = _swig_repr

    def __init__(self, file_prefix):
        this = _pywrap_tensorflow.new_EventsWriter(file_prefix)
        try:
            self.this.append(this)
        except __builtin__.Exception:
            self.this = this
    __swig_destroy__ = _pywrap_tensorflow.delete_EventsWriter
    __del__ = lambda self: None

    def FileName(self):
        return _pywrap_tensorflow.EventsWriter_FileName(self)

    def _WriteSerializedEvent(self, event_str):
        return _pywrap_tensorflow.EventsWriter__WriteSerializedEvent(self, event_str)

    def Flush(self):
        return _pywrap_tensorflow.EventsWriter_Flush(self)

    def Close(self):
        return _pywrap_tensorflow.EventsWriter_Close(self)

    def WriteEvent(self, event):
      from tensorflow.core.util.event_pb2 import Event
      if not isinstance(event, Event):
        raise TypeError("Expected an event_pb2.Event proto, "
                        " but got %s" % type(event))
      return self._WriteSerializedEvent(event.SerializeToString())

EventsWriter_swigregister = _pywrap_tensorflow.EventsWriter_swigregister
EventsWriter_swigregister(EventsWriter)

__version__ = _pywrap_tensorflow.__version__
GRAPH_DEF_VERSION = _pywrap_tensorflow.GRAPH_DEF_VERSION
GRAPH_DEF_VERSION_MIN_CONSUMER = _pywrap_tensorflow.GRAPH_DEF_VERSION_MIN_CONSUMER
GRAPH_DEF_VERSION_MIN_PRODUCER = _pywrap_tensorflow.GRAPH_DEF_VERSION_MIN_PRODUCER
class TF_Buffer(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, TF_Buffer, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, TF_Buffer, name)
    __repr__ = _swig_repr

    def __init__(self):
        this = _pywrap_tensorflow.new_TF_Buffer()
        try:
            self.this.append(this)
        except __builtin__.Exception:
            self.this = this
TF_Buffer_swigregister = _pywrap_tensorflow.TF_Buffer_swigregister
TF_Buffer_swigregister(TF_Buffer)


def TF_NewBufferFromString(proto):
    return _pywrap_tensorflow.TF_NewBufferFromString(proto)
TF_NewBufferFromString = _pywrap_tensorflow.TF_NewBufferFromString

def TF_NewBuffer():
    return _pywrap_tensorflow.TF_NewBuffer()
TF_NewBuffer = _pywrap_tensorflow.TF_NewBuffer

def TF_DeleteBuffer(arg1):
    return _pywrap_tensorflow.TF_DeleteBuffer(arg1)
TF_DeleteBuffer = _pywrap_tensorflow.TF_DeleteBuffer

def TF_GetBuffer(buffer):
    return _pywrap_tensorflow.TF_GetBuffer(buffer)
TF_GetBuffer = _pywrap_tensorflow.TF_GetBuffer

def TF_NewStatus():
    return _pywrap_tensorflow.TF_NewStatus()
TF_NewStatus = _pywrap_tensorflow.TF_NewStatus

def TF_DeleteStatus(arg1):
    return _pywrap_tensorflow.TF_DeleteStatus(arg1)
TF_DeleteStatus = _pywrap_tensorflow.TF_DeleteStatus

def TF_GetCode(s):
    return _pywrap_tensorflow.TF_GetCode(s)
TF_GetCode = _pywrap_tensorflow.TF_GetCode

def TF_Message(s):
    return _pywrap_tensorflow.TF_Message(s)
TF_Message = _pywrap_tensorflow.TF_Message

def _TF_NewSessionOptions():
    return _pywrap_tensorflow._TF_NewSessionOptions()
_TF_NewSessionOptions = _pywrap_tensorflow._TF_NewSessionOptions

def _TF_SetTarget(options, target):
    return _pywrap_tensorflow._TF_SetTarget(options, target)
_TF_SetTarget = _pywrap_tensorflow._TF_SetTarget

def _TF_SetConfig(options, proto, status):
    return _pywrap_tensorflow._TF_SetConfig(options, proto, status)
_TF_SetConfig = _pywrap_tensorflow._TF_SetConfig

def TF_DeleteSessionOptions(arg1):
    return _pywrap_tensorflow.TF_DeleteSessionOptions(arg1)
TF_DeleteSessionOptions = _pywrap_tensorflow.TF_DeleteSessionOptions

def TF_NewSession(arg1, status):
    return _pywrap_tensorflow.TF_NewSession(arg1, status)
TF_NewSession = _pywrap_tensorflow.TF_NewSession

def TF_CloseSession(arg1, status):
    return _pywrap_tensorflow.TF_CloseSession(arg1, status)
TF_CloseSession = _pywrap_tensorflow.TF_CloseSession

def TF_DeleteSession(arg1, status):
    return _pywrap_tensorflow.TF_DeleteSession(arg1, status)
TF_DeleteSession = _pywrap_tensorflow.TF_DeleteSession

def TF_ExtendGraph(arg1, proto, arg3):
    return _pywrap_tensorflow.TF_ExtendGraph(arg1, proto, arg3)
TF_ExtendGraph = _pywrap_tensorflow.TF_ExtendGraph

def TF_LoadLibrary(library_filename, status):
    return _pywrap_tensorflow.TF_LoadLibrary(library_filename, status)
TF_LoadLibrary = _pywrap_tensorflow.TF_LoadLibrary

def TF_GetOpList(lib_handle):
    return _pywrap_tensorflow.TF_GetOpList(lib_handle)
TF_GetOpList = _pywrap_tensorflow.TF_GetOpList

def TF_NewSessionOptions(target=None, config=None):
  opts = _TF_NewSessionOptions()
  if target is not None:
    from tensorflow.python.util import compat
    _TF_SetTarget(opts, compat.as_bytes(target))
  if config is not None:
    from tensorflow.core.protobuf import config_pb2
    if not isinstance(config, config_pb2.ConfigProto):
      raise TypeError("Expected config_pb2.ConfigProto, "
                      "but got %s" % type(config))
    from tensorflow.python.framework import errors
    with errors.raise_exception_on_not_ok_status() as status:
      config_str = config.SerializeToString()
      _TF_SetConfig(opts, config_str, status)
  return opts


def TF_Run(session, run_options, inputs, output_names, target_nodes, out_status, run_outputs):
    return _pywrap_tensorflow.TF_Run(session, run_options, inputs, output_names, target_nodes, out_status, run_outputs)
TF_Run = _pywrap_tensorflow.TF_Run

def TF_PRunSetup(session, input_names, output_names, target_nodes, out_status):
    return _pywrap_tensorflow.TF_PRunSetup(session, input_names, output_names, target_nodes, out_status)
TF_PRunSetup = _pywrap_tensorflow.TF_PRunSetup

def TF_PRun(session, handle, inputs, output_names, out_status):
    return _pywrap_tensorflow.TF_PRun(session, handle, inputs, output_names, out_status)
TF_PRun = _pywrap_tensorflow.TF_PRun

def EqualGraphDefWrapper(actual, expected):
    return _pywrap_tensorflow.EqualGraphDefWrapper(actual, expected)
EqualGraphDefWrapper = _pywrap_tensorflow.EqualGraphDefWrapper
class DeviceFactory(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, DeviceFactory, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, DeviceFactory, name)

    def __init__(self, *args, **kwargs):
        raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
    if _newclass:
        AddDevices = staticmethod(_pywrap_tensorflow.DeviceFactory_AddDevices)
    else:
        AddDevices = _pywrap_tensorflow.DeviceFactory_AddDevices
DeviceFactory_swigregister = _pywrap_tensorflow.DeviceFactory_swigregister
DeviceFactory_swigregister(DeviceFactory)

def DeviceFactory_AddDevices():
    return _pywrap_tensorflow.DeviceFactory_AddDevices()
DeviceFactory_AddDevices = _pywrap_tensorflow.DeviceFactory_AddDevices


def PyServer_New(server_def, out_status):
    return _pywrap_tensorflow.PyServer_New(server_def, out_status)
PyServer_New = _pywrap_tensorflow.PyServer_New

def PyServer_Start(in_server, out_status):
    return _pywrap_tensorflow.PyServer_Start(in_server, out_status)
PyServer_Start = _pywrap_tensorflow.PyServer_Start

def PyServer_Stop(in_server, out_status):
    return _pywrap_tensorflow.PyServer_Stop(in_server, out_status)
PyServer_Stop = _pywrap_tensorflow.PyServer_Stop

def PyServer_Join(in_server, out_status):
    return _pywrap_tensorflow.PyServer_Join(in_server, out_status)
PyServer_Join = _pywrap_tensorflow.PyServer_Join
class ServerInterface(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, ServerInterface, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, ServerInterface, name)

    def __init__(self, *args, **kwargs):
        raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
    __swig_destroy__ = _pywrap_tensorflow.delete_ServerInterface
    __del__ = lambda self: None

    def target(self):
        return _pywrap_tensorflow.ServerInterface_target(self)
ServerInterface_swigregister = _pywrap_tensorflow.ServerInterface_swigregister
ServerInterface_swigregister(ServerInterface)


def GetPythonWrappers(op_wrapper_buf):
    return _pywrap_tensorflow.GetPythonWrappers(op_wrapper_buf)
GetPythonWrappers = _pywrap_tensorflow.GetPythonWrappers
# This file is compatible with both classic and new-style classes.


