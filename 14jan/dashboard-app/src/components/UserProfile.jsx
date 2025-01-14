import React, { useEffect, useState } from "react";
import axios from "axios";

const UserProfile = () => {
  const [users, setUsers] = useState([]);

  useEffect(() => {
    axios.get("http://localhost:5000/users").then((response) => {
      setUsers(response.data);
    });
  }, []);

  return (
    <div className="p-6 bg-white shadow-lg rounded-lg border border-gray-200">
      <h2 className="text-2xl font-semibold text-gray-700 mb-6">
        User Profiles
      </h2>
      {users.length > 0 ? (
        users.map((user) => (
          <div
            key={user.id}
            className="mb-4 p-4 bg-gray-50 rounded-lg border border-gray-300"
          >
            <p className="text-gray-800 font-medium">Name: {user.name}</p>
            <p className="text-sm text-gray-500">Email: {user.email}</p>
          </div>
        ))
      ) : (
        <p className="text-gray-500">No user profiles available</p>
      )}
    </div>
  );
};

export default UserProfile;
