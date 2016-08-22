"""Python wrappers around Brain.

This file is MACHINE GENERATED! Do not edit.
"""

from google.protobuf import text_format

from tensorflow.core.framework import op_def_pb2
from tensorflow.python.framework import op_def_registry
from tensorflow.python.framework import ops
from tensorflow.python.ops import op_def_library


def reduce_join(inputs, reduction_indices, keep_dims=None, separator=None,
                name=None):
  r"""Joins a string Tensor across the given dimensions.

  Computes the string join across dimensions in the given string Tensor of shape
  `[d_0, d_1, ..., d_n-1]`.  Returns a new Tensor created by joining the input
  strings with the given separator (default: empty string).  Negative indices are
  counted backwards from the end, with `-1` being equivalent to `n - 1`.  Passing
  an empty `reduction_indices` joins all strings in linear index order and outputs
  a scalar string.


  For example:
  ```
  # tensor `a` is [["a", "b"], ["c", "d"]]
  tf.reduce_join(a, 0) ==> ["ac", "bd"]
  tf.reduce_join(a, 1) ==> ["ab", "cd"]
  tf.reduce_join(a, -2) = tf.reduce_join(a, 0) ==> ["ac", "bd"]
  tf.reduce_join(a, -1) = tf.reduce_join(a, 1) ==> ["ab", "cd"]
  tf.reduce_join(a, 0, keep_dims=True) ==> [["ac", "bd"]]
  tf.reduce_join(a, 1, keep_dims=True) ==> [["ab"], ["cd"]]
  tf.reduce_join(a, 0, separator=".") ==> ["a.c", "b.d"]
  tf.reduce_join(a, [0, 1]) ==> ["acbd"]
  tf.reduce_join(a, [1, 0]) ==> ["abcd"]
  tf.reduce_join(a, []) ==> ["abcd"]
  ```

  Args:
    inputs: A `Tensor` of type `string`.
      The input to be joined.  All reduced indices must have non-zero size.
    reduction_indices: A `Tensor` of type `int32`.
      The dimensions to reduce over.  Dimensions are reduced in the
      order specified.  If `reduction_indices` has higher rank than `1`, it is
      flattened.  Omitting `reduction_indices` is equivalent to passing
      `[n-1, n-2, ..., 0]`.  Negative indices from `-n` to `-1` are supported.
    keep_dims: An optional `bool`. Defaults to `False`.
      If `True`, retain reduced dimensions with length `1`.
    separator: An optional `string`. Defaults to `""`.
      The separator to use when joining.
    name: A name for the operation (optional).

  Returns:
    A `Tensor` of type `string`.
    Has shape equal to that of the input with reduced dimensions removed or
    set to `1` depending on `keep_dims`.
  """
  return _op_def_lib.apply_op("ReduceJoin", inputs=inputs,
                              reduction_indices=reduction_indices,
                              keep_dims=keep_dims, separator=separator,
                              name=name)


def string_to_hash_bucket(string_tensor, num_buckets, name=None):
  r"""Converts each string in the input Tensor to its hash mod by a number of buckets.

  The hash function is deterministic on the content of the string within the
  process.

  Note that the hash function may change from time to time.

  Args:
    string_tensor: A `Tensor` of type `string`.
    num_buckets: An `int` that is `>= 1`. The number of buckets.
    name: A name for the operation (optional).

  Returns:
    A `Tensor` of type `int64`.
    A Tensor of the same shape as the input `string_tensor`.
  """
  return _op_def_lib.apply_op("StringToHashBucket",
                              string_tensor=string_tensor,
                              num_buckets=num_buckets, name=name)


def _InitOpDefLibrary():
  op_list = op_def_pb2.OpList()
  text_format.Merge(_InitOpDefLibrary.op_list_ascii, op_list)
  op_def_registry.register_op_list(op_list)
  op_def_lib = op_def_library.OpDefLibrary()
  op_def_lib.add_op_list(op_list)
  return op_def_lib


_InitOpDefLibrary.op_list_ascii = """op {
  name: "ReduceJoin"
  input_arg {
    name: "inputs"
    type: DT_STRING
  }
  input_arg {
    name: "reduction_indices"
    type: DT_INT32
  }
  output_arg {
    name: "output"
    type: DT_STRING
  }
  attr {
    name: "keep_dims"
    type: "bool"
    default_value {
      b: false
    }
  }
  attr {
    name: "separator"
    type: "string"
    default_value {
      s: ""
    }
  }
}
op {
  name: "StringToHashBucket"
  input_arg {
    name: "string_tensor"
    type: DT_STRING
  }
  output_arg {
    name: "output"
    type: DT_INT64
  }
  attr {
    name: "num_buckets"
    type: "int"
    has_minimum: true
    minimum: 1
  }
}
"""


_op_def_lib = _InitOpDefLibrary()